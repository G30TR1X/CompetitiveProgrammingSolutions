#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n;
    cin >> n;
    ll a[n], b[n], c[n];
    for (ll i = 0; i < n; ++i)
        cin >> a[i];

    for (ll i = 0; i < n; ++i)
    {
        cin >> b[i];
        c[i] = a[i] - b[i];
    }

    sort(c, c+n);
    ll ans = 0;
    for (ll i = 0; i < n; ++i)
    {
        if (c[i] <= 0)
            continue;

        int pos = lower_bound(c, c+n, -c[i] + 1) - c;
        ans += i - pos;
    }

    cout << ans << endl;

    return 0;
}
