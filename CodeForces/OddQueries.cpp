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
    ll q, odd = 0;
    cin >> n >> q;
    a[0] = 0;
    for (ll i = 1; i <= n; ++i)
    {
        cin >> a[i];
        if (a[i] % 2)
            odd++;

        b[i] = odd;
    }

    ll l,r;
    for (ll i = 0; i < q; ++i)
    {
        cin >> l >> r >> k;
        ll innerOdd = b[r] - b[l-1];
        ll res = (odd - innerOdd) + (k % 2) * (r - l + 1);

        if (res % 2)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
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
