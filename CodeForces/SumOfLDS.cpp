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
    vector<ll> p(n);
    for (ll i = 0; i < n; ++i)
        cin >> p[i];
    
    ll sum = (n * (n+1) * (n+2))/6;
    for (ll i = 0; i+1 < n; ++i)
    {
        if (p[i] < p[i+1])
            sum -= (i+1) * (n-i-1);
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
