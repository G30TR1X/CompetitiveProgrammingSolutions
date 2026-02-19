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
    ll ans = 5, even = 0;
    for (ll i = 0; i < n; ++i)
    {
        cin >> x;
        if (x % k == 0)
            ans = 0;

        if (x % 2 == 0)
            ++even;

        ans = min(ans, (k - (x % k)));
    }

    if (k == 4 && ans != 0)
    {
        if (even >= 2)
            ans = min(ans, 1ll*0);
        else if (even == 1)
            ans = min(ans, 1ll*1);
        else
            ans = min(ans, 1ll*2);
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
