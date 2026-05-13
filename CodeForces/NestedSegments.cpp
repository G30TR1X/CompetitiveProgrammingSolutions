#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;

#define ll long long
#define ull unsigned long long
#define vl vector<ll>
#define vs vector<string>
#define vc vector<char>
#define vb vector<bool>
#define vvl vector<vector<ll>>
#define vvb vector<vector<bool>>
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>

const int MOD = 1e9 + 7;
const int MAX_ARRAY_SIZE = 1e6 + 1;

class compare {
    public:
    bool operator() (pair<pair<ll,ll>,ll> a, pair<pair<ll,ll>,ll> b) {
        if (a.first.first == b.first.first)
            return a.first.second > b.first.second;

        return a.first.first < b.first.first;
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
    a %= MOD;
    ll inv_b = powMOD(b, MOD - 2);
    ll res = (a*b)%MOD;
    return res;
}

ll logba(ll a, ll b)
{
    return log2(a)/log2(b);
}

ll t,n,m,k,x,y,z,u,v;
ll a[MAX_ARRAY_SIZE], b[MAX_ARRAY_SIZE];
string s;

void solve()
{
    cin >> n;
    vector<pair<pair<ll,ll>,ll>> v;
    for (ll i = 0; i < n; ++i)
    {
        ll l,r;
        cin >> l >> r;
        v.push_back({{l,r}, i+1});
    }

    if (n == 1)
    {
        cout << "-1 -1\n";
        return;
    }

    sort(v.begin(), v.end(), compare());
    pair<pair<ll,ll>,ll> curr = v[0];
    for (ll i = 1; i < n; ++i)
    {
        if (curr.first.first == v[i].first.first || (curr.first.first <= v[i].first.first && v[i].first.second <= curr.first.second))
        {
            cout << v[i].second << ' ' << curr.second << '\n';
            return;
        }
        else if (curr.first.first != v[i].first.first)
            curr = v[i];
    }

    cout << "-1 -1\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}
