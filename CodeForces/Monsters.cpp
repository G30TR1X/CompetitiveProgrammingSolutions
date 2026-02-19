#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long

const int MOD = 1e9 + 7;
const ll array_size = 1e6 + 1;
ll t, n, m, k, x, y, z, u, v;
ll a[array_size], b[array_size];
string s;

class compare
{
public:
    bool operator()(const pair<ll, ll> a, const pair<ll, ll> b)
    {
        if (a.first == b.first)
            return a.second < b.second;
        return a.first > b.first;
    }
};

ll powMOD(ll a, ll b)
{
    if (b == 0)
        return a % MOD;

    if (b & 1)
    {
        ll res = powMOD(a, (b - 1) / 2);
        res = res * res % MOD;
        return (res * a % MOD);
    }
    else
    {
        ll res = powMOD(a, b / 2);
        return (res * res % MOD);
    }
}

ll addMOD(ll a, ll b)
{
    return ((a % MOD) + (b % MOD)) % MOD;
}

ll subMOD(ll a, ll b)
{
    return ((a % MOD) - (b % MOD) + MOD) % MOD;
}

ll mulMOD(ll a, ll b)
{
    return ((a % MOD) * (b % MOD)) % MOD;
}

ll divMOD(ll a, ll b)
{
    a %= MOD;
    ll inv_b = powMOD(b, MOD - 2);
    ll res = (a * b) % MOD;
    return res;
}

void solve()
{
    cin >> n >> m;
    vector<pair<ll, ll>> monsters;
    for (ll i = 1; i <= n; ++i)
    {
        cin >> x;
        x = (x % m == 0) ? m : x % m;
        monsters.push_back({x, i});
    }

    sort(monsters.begin(), monsters.end(), compare());
    for (ll i = 0; i < n; ++i)
        cout << monsters[i].second << " ";

    cout << endl;
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
