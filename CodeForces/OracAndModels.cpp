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
const int MAX_ARRAY_SIZE = 1e5 + 1;
ll t,n,m,k,x,y,z,u,v;
string s;

void solve()
{
    cin >> n;
    vl a(n+1);
    for (ll i = 1; i <= n; ++i)
        cin >> a[i];

    vl dp(n+1);
    for (ll i = 1; i <= n; ++i)
        dp[i] = 1;

    for (ll i = 2; i <= n; ++i)
    {
        for (ll j = 1; j * j <= i; ++j)
        {
            if (i % j != 0)
                continue;

            if (a[j] < a[i])
                dp[i] = max(dp[i], dp[j] + 1);

            ll k = i / j;
            if (a[k] < a[i])
                dp[i] = max(dp[i], dp[k] + 1);
        }
    }

    ll ans = 1;
    for (ll i = 1; i <= n; ++i)
        ans = max(ans, dp[i]);

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
