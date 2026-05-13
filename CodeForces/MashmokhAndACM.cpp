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

void solve()
{
    cin >> n >> k;
    vvl factors(n+1);
    for (ll i = 1; i <= n; ++i)
    {
        for (ll j = 1; j * j <= i; ++j)
        {
            if (i % j == 0)
            {
                factors[i].push_back(j);
                if (i / j != j)
                    factors[i].push_back(i / j);
            }
        }
    }

    ll dp[k+1][n+1];
    for (ll i = 1; i <= n; ++i)
        dp[1][i] = 1;

    for (ll i = 2; i <= k; ++i)
    {
        for (ll j = 1; j <= n; ++j)
        {
            dp[i][j] = 0;
            for (ll x : factors[j])
                dp[i][j] = (dp[i][j] + dp[i-1][x]) % MOD;
        }
    }

    ll ans = 0;
    for (ll i = 1; i <= n; ++i)
        ans = (ans + dp[k][i]) % MOD;

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
