#include <algorithm>
#include <bits/stdc++.h>
#include <climits>
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
    cin >> n >> k;
    vl a(n);
    for (ll i = 0; i < n; i++)
        cin >> a[i];

    if (k > 2)
    {
        cout << 0 << '\n';
        return;
    }

    ll ans = LONG_LONG_MAX;
    vl diff;
    for (ll i = 0; i < n; ++i)
    {
        for (ll j = i+1; j < n; ++j)
            diff.push_back(abs(a[i] - a[j]));
    }

    sort(diff.begin(), diff.end());

    for (ll i = 0; i < n; ++i)
        ans = min(ans, a[i]);

    ans = min(ans, diff[0]);

    if (k == 2)
    {
        for (ll i = 0; i < n; ++i)
        {
            auto p = lower_bound(diff.begin(), diff.end(), a[i]);
            if (p != diff.end())
                ans = min(ans, abs(*p - a[i]));

            if (p != diff.begin())
                --p, ans = min(ans, abs(*p - a[i]));
        }
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
