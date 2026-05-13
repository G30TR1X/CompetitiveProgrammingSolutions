#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <queue>
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
    for (ll i = 0; i < n; ++i)
        cin >> a[i];

    vvl dp(n+1, vl(2, 0));
    dp[n][0] = 0;
    dp[n][1] = 0;
    dp[n-1][0] = 0;
    dp[n-1][1] = a[n-1];

    for (ll i = n-2; i >= 0; --i)
    {
        dp[i][0] = min(dp[i+1][1], dp[i+2][1]);
        dp[i][1] = min(dp[i+1][0] + a[i], dp[i+2][0] + a[i] + a[i+1]);
    }

    cout << dp[0][1] << '\n';
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
