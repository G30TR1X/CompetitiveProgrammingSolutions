#include <algorithm>
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
ll a[MAX_ARRAY_SIZE], b[MAX_ARRAY_SIZE];
string s;

void solve()
{
    cin >> n;
    for (ll i = 1; i <= n; ++i)
        cin >> a[i];
    for (ll i = 1; i <= n; ++i)
        cin >> b[i];

    vl ans(n+1,0), prefix(n+1,0);
    for (ll i = 1; i <= n; ++i)
        prefix[i] = prefix[i-1] + b[i];

    vl cnt(n+2,0);
    for (ll i = 1; i <= n; ++i)
    {
        ll x = a[i] + prefix[i-1];
        ll idx = (upper_bound(prefix.begin(), prefix.end(), x)) - prefix.begin();
        if (idx <= n)
            ans[idx] += x - prefix[idx-1];

        cnt[i]++, cnt[idx]--;
    }

    for (ll i = 1; i <= n; ++i)
        cnt[i] += cnt[i-1], ans[i] += cnt[i] * b[i];

    for (ll i = 1; i <= n; ++i)
        cout << ans[i] << ' ';
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
