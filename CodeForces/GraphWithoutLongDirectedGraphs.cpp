#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define vl vector<ll>

const int MOD = 998'244'353;
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

vl graph[MAX_ARRAY_SIZE];
bool vis[MAX_ARRAY_SIZE], col[MAX_ARRAY_SIZE];

bool dfs(ll node, ll color)
{
    if (vis[node])
        return (col[node] == color);

    vis[node] = true;
    col[node] = color;
    for (ll n : graph[node])
    {
        if (vis[n])
        {
            if (col[n] == color)
                return false;

            continue;
        }


        if (!dfs(n, 1 - color))
            return false;
    }
    return true;
}

void solve()
{
    cin >> n >> m;
    for (ll i = 1; i <= m; ++i)
    {
        cin >> a[i] >> v;
        graph[a[i]].push_back(v);
        graph[v].push_back(a[i]);
    }

    memset(vis, false, sizeof(vis));
    memset(col, false, sizeof(col));
    if (!dfs(1, 0))
        cout << "NO" << endl;
    else
    {
        cout << "YES" << endl;
        for (ll i = 1; i <= m; ++i)
            cout << col[a[i]];
        cout << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}
