#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define vl vector<ll>

const int MOD = 1e9 + 7;
const int MAX_ARRAY_SIZE = 1e6 + 1;
ll t,n,m,k,x,y,z,u,v;
ll a[MAX_ARRAY_SIZE], b[MAX_ARRAY_SIZE];
string s;

class compare {
    public:
    bool operator() (pair<int,int> a, pair<int,int> b) {
        return a.first > b.first;
    }
};

struct dsu {
    int n;
    vector<int> parent;
    vector<int> sz;

    dsu(int n) : n(n), parent(n+1), sz(n+1, 1)
    {
        for (int i = 1; i <= n; ++i)
            parent[i] = i;
    }

    int rep(int x)
    {
        return parent[x] == x ? x : parent[x] = rep(parent[x]);
    }

    void join(int x, int y)
    {
        x = rep(x);
        y = rep(y);

        if (sz[x] < sz[y])
            swap(x, y);

        parent[y] = x;
        sz[x] += sz[y];
    }

    bool check(int x, int y)
    {
        return rep(x) == rep(y);
    }
};

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

void solve()
{
    cin >> x >> y >> m;
    ll ans;
    ans = m/x + m/y + 2;
    cout << ans << endl;
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
