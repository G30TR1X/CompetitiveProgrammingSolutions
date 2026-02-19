#include <bits/stdc++.h>
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

vvl graph(MAX_ARRAY_SIZE);
vb vis(MAX_ARRAY_SIZE);
bool isCycle = true;

void dfsTraverse(ll node)
{
    vis[node] = true;

    if (graph[node].size() != 2)
        isCycle = false;

    for (ll next : graph[node])
    {
        if (!vis[next])
            dfsTraverse(next);
    }
}

void solve()
{
    cin >> n >> m;
    for (ll i = 1; i <= n; ++i)
        graph[i].clear(), vis[i] = false;

    for (ll i = 0; i < m; ++i)
    {
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    ll cycle = 0;
    for (ll i = 1; i <= n; ++i)
    {
        if (vis[i])
            continue;

        isCycle = true;
        dfsTraverse(i);

        if (isCycle)
            ++cycle;
    }

    cout << cycle << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}
