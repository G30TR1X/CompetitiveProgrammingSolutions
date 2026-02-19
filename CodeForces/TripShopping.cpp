#include <algorithm>
#include <bits/stdc++.h>
#include <ostream>
#include <utility>
using namespace std;

#define ll long long
#define ull unsigned long long

const ll array_size = 1e6 + 1;
ll t,n,m,k,x,y,z,u,v;
ll a[array_size],b[array_size],c[array_size];
string s;

void solve()
{
    cin >> n >> k;
    for (ll i = 0; i < n; ++i)
        cin >> a[i];

    ll ans = 0;
    vector<pair<ll,ll>> v;
    for (ll i = 0; i < n; ++i)
    {
        cin >> m;
        if (m < a[i])
            swap(m, a[i]);

        ans += m - a[i];
        v.push_back({a[i], m});
    }

    sort(v.begin(), v.end());
    for (ll i = 1; i < n; ++i)
    {
        if (v[i].first < v[i-1].second)
        {
            cout << ans << endl;
            return;
        }
    }

    ll mn = INT_MAX;
    for (ll i = 1; i < n; ++i)
        mn = min(mn, v[i].first - v[i-1].second);

    cout << ans + 2*mn << endl;
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
