#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define vl vector<ll>
#define vvl vector<vector<ll>>

const int MOD = 998'244'353;
const int MAX_ARRAY_SIZE = 1e6 + 1;
ll t,n,m,k,x,y,z,u,v;
ll a[MAX_ARRAY_SIZE], b[MAX_ARRAY_SIZE];
string s;

ll mulMOD(ll a, ll b)
{
    return ((a%MOD)*(b%MOD))%MOD;
}

ll power[MAX_ARRAY_SIZE];
int col[MAX_ARRAY_SIZE];

bool dfs(ll node, ll color, ll& cnt1, ll& cnt2, vvl& graph)
{
    col[node] = color;

    if (color)
        ++cnt1;
    else
        ++cnt2;

    for (ll n : graph[node])
    {
        if (col[n] == -1)
        {
            if (!dfs(n, 1 - color, cnt1, cnt2, graph))
                return false;
        }

        if (col[n] == color)
            return false;
    }
    return true;
}

void solve()
{
    cin >> n >> m;
    vvl graph(n+1);
    for (ll i = 1; i <= m; ++i)
    {
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    for (ll i = 0; i <= n; ++i)
        col[i] = -1;

    ll ans = 1;
    for (ll i = 1; i <= n; ++i)
    {
        if (col[i] != -1)
            continue;

        ll cnt1 = 0, cnt2 = 0;
        if (!dfs(i, 0, cnt1, cnt2, graph))
        {
            cout << 0 << endl;
            return;
        }
        
        if (cnt1 == 0 || cnt2 == 0)
            ans = mulMOD(ans, 3);
        else
            ans = mulMOD(ans, power[cnt1] + power[cnt2]);
    }

    cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    power[0] = 1;
    power[1] = 2;
    for (ll i = 2; i < MAX_ARRAY_SIZE; ++i)
        power[i] = mulMOD(power[i-1], 2);

    cin >> t;
    while (t--)
        solve();

    return 0;
}
