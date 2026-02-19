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

    ll ans = 0;
    for (ll i = n-1; i > 0; --i)
    {
        if (a[i] == 0)
        {
            ans = -1;
            break;
        }

        if (a[i] <= a[i-1])
        {
            while (a[i] <= a[i-1] && a[i-1] != 0)
            {
                ++ans;
                a[i-1] /= 2;
            }
        }
    }

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
