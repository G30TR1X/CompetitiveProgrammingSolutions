#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long

const int MOD = 1e9 + 7;
const ll array_size = 1e6 + 1;
ll t,n,m,k,x,y,z,u,v;
ll a[array_size], b[array_size];
string s;

void solve()
{
    cin >> n >> k;
    for (ll i = 0; i < n; ++i)
        cin >> a[i];

    for (ll i = 0; i < n; ++i)
        cin >> b[i];

    ll prefix[n];
    prefix[0] = a[0] * b[0];
    for (ll i = 1; i < n; ++i)
        prefix[i] = prefix[i-1] + a[i] * b[i];

    ll suffix[n];
    suffix[n-1] = a[n-1] * b[n-1];
    for (ll i = n-2; i >= 0; --i)
        suffix[i] = suffix[i+1] + a[i] * b[i];

    ll fullPrefix[n];
    fullPrefix[0] = a[0];
    for (ll i = 1; i < n; ++i)
        fullPrefix[i] = fullPrefix[i-1] + a[i];

    if (k == n)
    {
        cout << fullPrefix[n-1] << endl;
        return;
    }

    ll l = 0, ans = prefix[n-1];
    for (ll r = k-1; r < n; ++r, ++l)
    {
        ll total = prefix[r];
        if (l-1 < 0)
            total = fullPrefix[r] + suffix[r+1];
        else if (r+1 >= n)
            total = fullPrefix[r] - fullPrefix[l-1] + prefix[l-1];
        else
            total = prefix[l-1] + fullPrefix[r] - fullPrefix[l-1] + suffix[r+1];

        ans = max(ans, total);
    }

    cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}
