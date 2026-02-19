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
    cin >> n;
    ll xorSum = 0;
    for (ll i = 0; i < n; ++i)
    {
        cin >> a[i];
        xorSum ^= a[i];
    }

    if (xorSum == 0 || n % 2 == 1)
        cout << xorSum << endl;
    else
        cout << -1 << endl;


    /* Brute Force Approach
    ll finalXOR = 0;
    for (ll i = 0; i < n; ++i)
        finalXOR ^= xorSum ^ a[i];

    cout << ((finalXOR == 0) ? xorSum : -1) << endl;
    */
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
