#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long

const int MOD = 998'244'353;
const ll array_size = 1e6 + 1;
ll t,n,m,k,x,y,z,u,v;
vector<ll> a(2000001), b(2000001), c(2000001), d(2000001);
string s;


void solve()
{
    cin >> n;
    for (ll i = 0; i < n; ++i)
        cin >> a[i];

    for (ll i = 0; i < n; ++i)
        cin >> b[a[i]];

    cin >> m;    
    for (ll i = 0; i < m; ++i)
        cin >> c[i];

    for (ll i = 0; i < m; ++i)
        cin >> d[c[i]];

    ll ans = 1;
    for (ll i = 0; i < 2000000; ++i)
    {
        ll powX = b[i], powY = d[i];
        if (powX == 0 && powY == 0)
            continue;

        if (powX > powY)
            ans = (ans * 2) % MOD;
        else if (powX < powY)
        {
            ans = 0;
            break;
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
