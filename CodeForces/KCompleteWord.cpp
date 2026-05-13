#include <algorithm>
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <numeric>
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
    cin >> n >> k >> s;

    ll ans = 0;
    for (ll i = 0; i < (k+1)/2; ++i)
    {
        vl freq(26,0);
        for (ll j = 0; j < n/k; ++j)
        {
            ll idx1 = j*k+i;
            ll idx2 = (j+1)*k-i-1;
            freq[s[idx1]-'a']++;

            if (idx1 != idx2)
                freq[s[idx2]-'a']++;
        }

        ans += accumulate(freq.begin(), freq.end(), 0) - *max_element(freq.begin(), freq.end());
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
