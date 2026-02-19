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
    cin >> n >> m;
    for (ll i = 0; i < n; ++i)
        cin >> a[i];

    for (ll i = 0; i < m; ++i)
        cin >> b[i];

    if (n == 1)
    {
        for (ll i = 0; i < m; ++i)
            cout << a[0] + b[i] << " ";
        cout << endl;
        return;
    }

    ll g = a[1] - a[0];
    for (ll i = 2; i < n; ++i)
        g = __gcd(g, a[i] - a[0]);

    for (ll i = 0; i < m; ++i)
        cout << abs(__gcd(g, a[0] + b[i])) << " ";
    cout << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}
