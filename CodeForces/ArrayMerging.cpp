#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long

const int MOD = 1e9 + 7;
const ll array_size = 1e6 + 1;
ll t,n,m,k,x,y,z,u,v;
ll a[array_size], b[array_size];
string s;

class compare {
    public:
    bool operator() (pair<int,int> a, pair<int,int> b) {
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
    cin >> n;
    unordered_map<ll, ll> counterA, counterB;
    unordered_set<ll> num;

    ll consecutive = 0, prev = -1;
    for (ll i = 0; i < n; ++i)
    {
        cin >> x;
        if (prev == x)
            consecutive++;
        else
            consecutive = 1;

        prev = x;
        counterA[x] = max(counterA[x], consecutive);
        num.insert(x);
    }

    consecutive = 0, prev = -1;
    for (ll i = 0; i < n; ++i)
    {
        cin >> x;
        if (prev == x)
            consecutive++;
        else
            consecutive = 1;

        prev = x;
        counterB[x] = max(counterB[x], consecutive);
        num.insert(x);
    }

    ll ans = 1;
    for (ll x : num)
        ans = max(ans, counterA[x] + counterB[x]);

    cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // freopen("input.txt", "r", stdin);

    cin >> t;
    while (t--)
        solve();

    return 0;
}
