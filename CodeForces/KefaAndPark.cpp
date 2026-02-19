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

vector<ll> tree[array_size];
bool visited[array_size], cat[array_size];

ll dfs(ll node, ll cats, ll parent)
{
    if (cat[node])
        cats++;
    else
        cats = 0;

    if (cats > m)
        return 0;

    visited[node] = true;
    ll res = 0;

    if (tree[node].size() == 1 && parent == tree[node][0])
        return 1;

    for (auto n : tree[node])
    {
        if (visited[n])
            continue;

        res += dfs(n, cats, node);
    }

    return res;
}

void solve()
{
    cin >> n >> m;
    for (ll i = 1; i <= n; ++i)
    {
        cin >> cat[i];
        visited[i] = false;
    }

    for (ll i = 0; i < n-1; ++i)
    {
        cin >> u >> v;
        tree[u].push_back(v);
        tree[v].push_back(u);
    }

    ll ans = dfs(1, 0, -1);
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
