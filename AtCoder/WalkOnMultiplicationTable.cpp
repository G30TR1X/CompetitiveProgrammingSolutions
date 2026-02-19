#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long

const int MOD = 1e9 + 7;
const ll array_size = 1e6 + 1;
ll t,n,m,k,x,y,z,u,v;
ll a[array_size];
string s;

void solve()
{
    cin >> n;

    ll ans = LONG_LONG_MAX;
    for (ll i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            ll n1 = i, n2 = n / i;
            --n1, --n2;
            ans = min(ans, n1 + n2);
        }
    }

    cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}
