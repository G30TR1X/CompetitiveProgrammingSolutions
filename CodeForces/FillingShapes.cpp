#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long

const int MOD = 1e9 + 7;
const ll array_size = 1e6 + 1;
ll t,n,m,k,x,y,z,u,v;
ll a[array_size];
string s;

void solve()
{
    cin >> n;
    if (n % 2 == 1)
    {
        cout << 0 << endl;
        return;
    }

    ll res = (ll) pow(2, n/2);
    cout << res << endl;

    /* DP Method (Push DP)
    ll dp[61];
    dp[0] = 1;
    dp[1] = 0;
    for (ll i = 2; i <= n; i++)
        dp[i] = 2*dp[i-2];

    cout << dp[n] << endl;
    */
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}
