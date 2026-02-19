#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long

const ll array_size = 1e6 + 1;
ll t,n,m,k,x,y,z,u,v;
ll a[array_size],b[array_size],c[array_size];
string s;

void solve()
{
    cin >> n >> x;
    for (ll i = 0; i < n; ++i)
        cin >> a[i];

    ll maxDiff = a[0];
    ll highestGasStation = a[0];
    for (ll i = 1; i < n; ++i)
    {
        maxDiff = max(maxDiff, a[i] - a[i-1]);
        highestGasStation = max(highestGasStation, a[i]);
    }

    maxDiff = max(maxDiff, (x - highestGasStation)*2);
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
