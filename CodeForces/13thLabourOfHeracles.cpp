#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;

#define ll long long
#define ull unsigned long long
#define vl vector<ll>
#define vs vector<string>
#define vc vector<char>
#define vb vector<bool>
#define vvl vector<vector<ll>>
#define vvb vector<vector<bool>>
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>

const int MOD = 1e9 + 7;
const int MAX_ARRAY_SIZE = 1e6 + 1;
ll t,n,m,k,x,y,z,u,v;
string s;

void solve()
{
    cin >> n;
    vvl graph(n+1);
    vl weight(n+1);
    ll ans = 0;
    for (ll i = 1; i <= n; i++)
    {
        cin >> weight[i];
        ans += weight[i];
    }

    for (ll i = 0; i < n-1; ++i)
    {
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    cout << ans << ' ';
    vl extra;
    for (ll i = 1; i <= n; ++i)
        for (ll j = 1; j < graph[i].size(); ++j)
            extra.push_back(weight[i]);

    sort(extra.rbegin(), extra.rend());
    for (ll e : extra)
    {
        ans += e;
        cout << ans << ' ';
    }
    cout << '\n';
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
