#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define vl vector<ll>
#define vs vector<string>
#define vc vector<char>
#define vb vector<bool>
#define vvl vector<vector<ll>>
#define vvb vector<vector<bool>>

ll powMOD(ll a, ll b);
ll addMOD(ll a, ll b);
ll subMOD(ll a, ll b);
ll mulMOD(ll a, ll b);
ll divMOD(ll a, ll b);
ll logba(ll a, ll b);

const int MOD = 1e9 + 7;
const int MAX_ARRAY_SIZE = 1e6 + 1;
ll t,n,m,k,x,y,z,u,v;
string s;

void solve()
{
    cin >> x >> y >> k;
    vl a(x,0), b(y,0);
    for (ll i = 0; i < k; ++i)
    {
        cin >> z;
        a[z-1]++;
    }

    for (ll i = 0; i < k; ++i)
    {
        cin >> z;
        b[z-1]++;
    }

    ll ans = k * (k - 1) / 2;
    for (ll c : a)
        ans -= c * (c - 1) / 2;

    for (ll c : b)
        ans -= c * (c - 1) / 2;

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
