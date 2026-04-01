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
map<pair<ll,ll>, ll> idx;
string s;

void dfs(ll curr, ll parent, vvl &graph, vl &dp)
{
    for (ll v : graph[curr])
    {
        if (v == parent)
            continue;

        if (idx[{parent,curr}] < idx[{curr,v}])
            dp[v] = dp[curr];
        else
            dp[v] = dp[curr] + 1;

        dfs(v, curr, graph, dp);
    }
}

void solve()
{
    cin >> n;
    vvl graph(n+1);
    vl dp(n+1, 0);
    for (ll i = 0; i < n-1; ++i)
    {
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
        idx[{u,v}] = idx[{v,u}] = i;
    }

    dp[1] = 1;
    idx[{0,1}] = idx[{1,0}] = -1;
    dfs(1, 0, graph, dp);

    cout << *max_element(dp.begin(), dp.end()) << '\n';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    //freopen("input.txt", "r", stdin);

    cin >> t;
    while (t--)
        solve();

    return 0;
}
