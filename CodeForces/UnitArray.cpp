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
    ll neg = 0, sum = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] == -1)
            ++neg;
 
        sum += a[i];
    }
    
    if (sum >= 0)
        cout << neg % 2 << endl;
    else
    {
        ll ans = 0;
        for (ll i = sum; i < 0; i += 2)
            ++ans;

        neg -= ans;
        cout << ans + neg % 2 << endl;
    }
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
