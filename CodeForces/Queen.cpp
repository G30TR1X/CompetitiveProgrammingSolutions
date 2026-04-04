#include <bits/stdc++.h>
#include <pthread.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define vl vector<ll>
#define vs vector<string>
#define vc vector<char>
#define vb vector<bool>
#define vvl vector<vector<ll>>
#define vvb vector<vector<bool>>

const int MOD = 1e9 + 7;
const int MAX_ARRAY_SIZE = 1e6 + 1;
ll t,n,m,k,x,y,z,u,v;
ll a[MAX_ARRAY_SIZE], b[MAX_ARRAY_SIZE];
string s;

void dfs(ll node, vvl& graph, vb& notRespect, vl& deleteNode)
{
    ll childNotRespect = 0;
    for (ll n : graph[node])
    {
        dfs(n, graph, notRespect, deleteNode);
        if (notRespect[n])
            ++childNotRespect;
    }

    if (notRespect[node] && childNotRespect == graph[node].size())
        deleteNode.push_back(node);
}

void solve()
{
    cin >> n;
    vvl graph(n+1);
    vb notRespect(n+1,false);
    ll parent;
    for (ll i = 1; i <= n; ++i)
    {
        cin >> x >> y;
        if (x == -1)
            parent = i;
        else
            graph[x].push_back(i);

        notRespect[i] = y;
    }

    vl deleteNode;
    dfs(parent, graph, notRespect, deleteNode);

    if (deleteNode.size() == 0)
    {
        cout << -1 << '\n';
        return;
    }

    sort(deleteNode.begin(), deleteNode.end());
    for (ll d : deleteNode)
        cout << d << ' ';
    cout << '\n';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}
