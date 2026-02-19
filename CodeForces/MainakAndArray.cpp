#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long

const int MOD = 1e9 + 7;
const ll array_size = 1e6 + 1;
ll t,n,m,k,x,y,z,u,v;
ll a[array_size],b[array_size],c[array_size];
string s;

void solve()
{
    cin >> n;
    for (ll i = 0; i < n; ++i)
        cin >> a[i];

    if (n == 1)
    {
        cout << 0 << endl;
        return;
    }

    ll maxDiff = -1;
    for (ll i = 1; i < n; ++i)
        maxDiff = max(maxDiff, a[i] - a[0]);

    for (ll i = n-2; i >= 0; --i)
        maxDiff = max(maxDiff, a[n-1] - a[i]);

    for (ll i = 0; i < n; ++i)
        maxDiff = max(maxDiff, a[i] - a[(i + 1) % n]);

    cout << maxDiff << endl;
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
