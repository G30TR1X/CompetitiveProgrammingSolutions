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
ll t, n, m, k, x, y, z, u, v;
ll a[MAX_ARRAY_SIZE], b[MAX_ARRAY_SIZE];
string s;

void solve()
{
    cin >> n;
    for (ll i = 0; i < n; ++i)
        cin >> a[i];

    vvl positions(n + 1);
    vl dp(n + 1, 0);

    ll ans = 0;
    for (ll i = 1; i <= n; ++i)
    {
        dp[i] = dp[i - 1];
        ll currVal = a[i - 1], currIndex = i - 1;
        positions[currVal].push_back(currIndex);

        if (positions[currVal].size() >= currVal)
        {
            ll startIndex = positions[currVal][positions[currVal].size() - currVal];
            ll prevLen = startIndex == 0 ? 0 : dp[startIndex];
            ll newLen = prevLen + currVal;

            dp[i] = max(dp[i], newLen);
        }
    }

    cout << dp[n] << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    freopen("input.txt", "r", stdin);

    cin >> t;
    while (t--)
        solve();

    return 0;
}
