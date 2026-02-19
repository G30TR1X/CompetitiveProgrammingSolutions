#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define vl vector<ll>

const int MOD = 1e9 + 7;
const int MAX_ARRAY_SIZE = 1e6 + 1;
ll t, m, z, u, v;
ll a[MAX_ARRAY_SIZE], b[MAX_ARRAY_SIZE];
string s;

void solve()
{
    ll n, k, x, y;
    cin >> n >> k >> x >> y;
    if (y < k*x || y > ((k*x) + (k-1)*n))
    {
        cout << -1 << endl;
        return;
    }

    vector<ll> ans(n,0);
    ans[0] = k*x;
    ll extra = y - ans[0];
    for (ll i = 0; i < n; ++i)
    {
        ans[i] += min(k-1, extra);
        extra -= min(k-1, extra);
    }

    for (ll i = 0; i < n; ++i)
        cout << ans[i] << " ";
    cout << endl;
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
