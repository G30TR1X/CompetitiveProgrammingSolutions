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
ll t,n,m,k,x,y,z,u,v, red = 0, blue = 0;
vl bipart;
queue<ll> q;
string s;

void dfs(ll node, bool clr, vvl& graph, vb& color, vb& vis)
{
    if (vis[node])
        return;

    vis[node] = true;
    if (clr)
        ++blue;
    else
        ++red;

    for (ll n : graph[node])
        dfs(n, !clr, graph, color, vis);
}

void solve()
{
    cin >> n;
    vvl graph(n);
    vb color(n), vis(n, false);
    for (ll i = 0; i < n-1; ++i)
    {
        cin >> x >> y;
        graph[x-1].push_back(y-1);
        graph[y-1].push_back(x-1);
    }

    dfs(0, true, graph, color, vis);

    cout << (blue - 1) * (red - 1) << '\n';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}
