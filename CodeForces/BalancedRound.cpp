#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long

const int MOD = 1e9 + 7;
const ll array_size = 1e6 + 1;
ll t, n, m, k, x, y, z, u, v;
ll a[array_size], b[array_size], c[array_size];
string s;

void solve()
{
    cin >> n >> k;
    for (ll i = 0; i < n; ++i)
        cin >> a[i];

    ll ans = 1, finalAns = 0;
    for (ll i = 1; i < n; ++i)
    {
        if (abs(a[i] - a[i - 1]) <= k)
            ans++;
        else
        {
            finalAns = max(finalAns, ans);
            ans = 1;
        }
    }

    cout << finalAns << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> t;
    while (t--)
        solve();

    return 0;
}
