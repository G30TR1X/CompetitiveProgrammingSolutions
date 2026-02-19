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

const int MOD = 1e9 + 7;
ll t,n,m,k,x,y,z,u,v;
string s;

void solve()
{
    cin >> n >> k;
    cout << powMOD(n, k) << '\n';
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

ll powMOD(ll a, ll b)
{
    if (b == 0)
        return 1;

    if (b == 1)
        return a%MOD;

    if (b & 1)
    {
        ll res = powMOD(a, (b-1)/2);
        res = res*res%MOD;
        return (res*a%MOD);
    }
    else
    {
        ll res = powMOD(a, b/2);
        return (res*res%MOD);
    }
}

ll addMOD(ll a, ll b)
{
    return ((a%MOD)+(b%MOD))%MOD;
}

ll subMOD(ll a, ll b)
{
    return ((a%MOD)-(b%MOD)+MOD)%MOD;
}

ll mulMOD(ll a, ll b)
{
    return ((a%MOD)*(b%MOD))%MOD;
}

ll divMOD(ll a, ll b)
{
    a %= m;
    ll inv_b = powMOD(b, MOD - 2);
    ll res = (a*b)%m;
    return res;
}
