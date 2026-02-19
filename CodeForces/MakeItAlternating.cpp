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

const int MOD = 998'244'353;
const int MAX_ARRAY_SIZE = 1e6 + 1;
ll t,n,m,k,x,y,z,u,v;
string s;

void solve()
{
    cin >> s;
    ll n = s.size();
    vl v(n);
    ll cnt = 0, curr = !(s[0] - '0');
    for (ll i = 0; i < n; ++i)
    {
        if (s[i] - '0' == curr)
            cnt++;
        else
            cnt = 0, curr = s[i] - '0';

        v[i] = cnt;
    }

    ll sqnc = 1, zero = 0;
    for (ll i = n-1; i >= 0; --i)
    {
        if (v[i] == 0)
            ++zero;
        else if ((i == n-1 && v[i] != 0) || (v[i] != 0 && v[i+1] == 0))
            sqnc = mulMOD(sqnc, v[i]+1);
    }

    for (ll i = 1; i <= n-zero; ++i)
        sqnc = mulMOD(sqnc, i);

    cout << n - zero << ' ' << sqnc << '\n';
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
    a %= MOD;
    ll inv_b = powMOD(b, MOD - 2);
    ll res = (a*b)%MOD;
    return res;
}

ll logba(ll a, ll b)
{
    return log2(a)/log2(b);
}

