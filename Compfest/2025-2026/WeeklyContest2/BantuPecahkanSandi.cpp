#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long

int MOD = 1e9 + 7;
const ll array_size = 1e6 + 1;
ll t,n,m,k,x,y,z,u,v;
ll a[array_size], b[array_size];
string s;

class compare {
public:
    bool operator() (pair<ll,ll> a, pair<ll,ll> b) {
        if (a.first == b.first)
            return a.second < b.second;

        return a.first > b.first;
    }
};

ll powMOD(ll a, ll b)
{
    if (b == 0)
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

void solve()
{
    cin >> n >> MOD;
    for (ll i = 0; i < n; ++i)
        cin >> a[i];

    vector<pair<ll,ll>> v;
    for (ll i = 0; i < n; ++i)
    {
        cin >> x;
        v.push_back({x, a[i]});
    }

    sort(v.begin(), v.end(), compare());
    ll k = MOD-1-(v[0].second % MOD), sum = 0;
    for (ll i = 0; i < n; ++i)
        sum += addMOD(v[i].second, k) * v[i].first;

    cout << sum << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}
