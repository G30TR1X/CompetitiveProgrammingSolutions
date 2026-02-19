#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long

const int MOD = 1e9 + 7;
const ll array_size = 1e6 + 1;
ll t, n, m, k, x, y, z, u, v;
ll a[array_size];
string s;

void solve()
{
    freopen("input.txt", "r", stdin);
    cin >> n;
    vector<ll> v[n+1];
    for (ll i = 1; i <= n; ++i)
    {
        cin >> k;
        v[k].push_back(i);
    }

    cin >> m;
    for (ll i = 0; i < m; ++i)
    {
        cin >> x >> y >> z;
        auto l = lower_bound(v[z].begin(), v[z].end(), x);
        auto r = lower_bound(v[z].begin(), v[z].end(), y+1);
        cout << r - l << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}
