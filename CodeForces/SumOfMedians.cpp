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
    for (ll i = 0; i < n*k; ++i)
        cin >> a[i];

    ll medians = ceil(n/2.0)-1, sum = 0;
    ll l = 0, r = n*k-1;
    while (l <= r)
    {
        for (ll i = n-1; i > medians; --i, --r);
        sum += a[r--];
        for (ll i = 0; i < medians; ++i, ++l);
    }

    cout << sum << endl;
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
