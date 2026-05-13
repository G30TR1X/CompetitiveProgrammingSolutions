#include <bits/stdc++.h>
#include <climits>
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
    ll a,b;
    cin >> n >> a >> b;
    vl x(n+1,0);
    for (ll i = 1; i <= n; ++i)
        cin >> x[i];

    vl suf(n+2,0);
    suf[n] = x[n];
    for (ll i = n-1; i >= 1; --i)
        suf[i] = suf[i+1] + x[i];

    ll ans = LONG_LONG_MAX;
    for (ll i = 0; i <= n; ++i)
    {
        ll c = x[i] * (a + b) + (suf[i+1] - (n - i) * x[i]) * b;
        ans = min(ans, c);
    }

    cout << ans << '\n';
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
