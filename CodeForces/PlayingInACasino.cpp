#include <bits/stdc++.h>
#include <pthread.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define vl vector<ll>
#define vs vector<string>
#define vc vector<char>
#define vb vector<bool>
#define vvl vector<vector<ll>>
#define vvb vector<vector<bool>>

const int MOD = 1e9 + 7;
const int MAX_ARRAY_SIZE = 1e5 + 1;
ll t,n,m,k,x,y,z,u,v;
string s;

void solve()
{
    cin >> n >> m;
    vvl a(m, vl(n));
    for (ll j = 0; j < n; ++j)
        for (ll i = 0; i < m; ++i)
            cin >> a[i][j];

    for (ll i = 0; i < m; ++i)
        sort(a[i].begin(), a[i].end());

    ll ans = 0;
    for (ll i = 0; i < m; ++i)
    {
        for (ll j = 0; j < n; ++j)
        {
            ans -= (a[i][j] * (n-j-1));
            ans += (a[i][j] * j);
        }
    }

    cout << ans << '\n';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    //freopen("input.txt", "r", stdin);

    cin >> t;
    while (t--)
        solve();

    return 0;
}
