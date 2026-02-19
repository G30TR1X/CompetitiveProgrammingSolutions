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
    for (int i = 1; i <= n; ++i)
    {
        cin >> a[i];
        b[i] = abs(a[i] - i);
    }
    
    ll ans = b[1];
    for (ll i = 2; i <= n; ++i)
        ans = __gcd(ans, b[i]);

    cout << ans << endl;
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
