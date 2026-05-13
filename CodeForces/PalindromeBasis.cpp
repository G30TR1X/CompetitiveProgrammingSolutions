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
const int MAX_ARRAY_SIZE = 4e4 + 1;
ll t,n,m,k,x,y,z,u,v;

bool check(ll i)
{
    string org = to_string(i);
    string rev = org;
    reverse(rev.begin(), rev.end());
    return org == rev;
}

void solve(vl &dp)
{
    cin >> n;
    cout << dp[n] << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vl a;
    for (ll i = 0; i < MAX_ARRAY_SIZE; ++i)
        if (check(i))
            a.push_back(i);

    ll size = a.size();

    vl dp(MAX_ARRAY_SIZE,0);
    dp[0] = 1;
    for (ll i = 0; i < size; ++i)
    {
        for (ll x = 1; x < MAX_ARRAY_SIZE; ++x)
        {
            if (x - a[i] >= 0)
                dp[x] = (dp[x] + dp[x - a[i]]) % MOD;
        }
    }


    cin >> t;
    while (t--)
        solve(dp);

    return 0;
}
