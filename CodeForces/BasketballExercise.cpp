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

void solve()
{
    cin >> n;
    vl r1(n), r2(n);
    for (ll i = 0; i < n; ++i)
        cin >> r1[i];
    for (ll i = 0; i < n; ++i)
        cin >> r2[i];

    vvl dp(n, vl(2,0));
    dp[0][0] = r1[0];
    dp[0][1] = r2[0];
    for (ll i = 1; i < n; ++i)
    {
        dp[i][0] = max(dp[i-1][0], dp[i-1][1] + r1[i]);
        dp[i][1] = max(dp[i-1][1], dp[i-1][0] + r2[i]);
    }

    cout << max(dp[n-1][0], dp[n-1][1]) << '\n';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}
