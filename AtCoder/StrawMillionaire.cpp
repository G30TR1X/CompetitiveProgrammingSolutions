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
string s;

void dfs(vvl &graph, vb &vis, ll curr, ll &ans)
{
    if (vis[curr])
        return;

    ++ans;
    vis[curr] = true;
    for (ll i = 0; i < graph[curr].size(); ++i)
        dfs(graph, vis, graph[curr][i], ans);
}

void solve()
{
    cin >> n >> m;
    vvl graph(n+1);
    vb vis(n+1, false);
    for (ll i = 0; i < m; ++i)
    {
        cin >> u >> v;
        graph[u].push_back(v);
    }

    ll ans = 0;
    dfs(graph, vis, 1, ans);
    cout << ans << '\n';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}
