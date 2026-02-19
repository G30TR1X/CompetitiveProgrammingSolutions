#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long

const ll array_size = 1e6 + 1;
ll n,m,k,x,y,z,u,v;
ll a[array_size],b[array_size],c[array_size];

vector<ll> edges[100005];
bool visited[100005] = {false};

ll dfs(ll vertex)
{
    ll minimum = a[vertex];
    visited[vertex] = true;

    for (ll x : edges[vertex])
    {
        if (!visited[x])
            minimum = min(minimum, dfs(x));
    }
    
    return minimum;
}

void solve()
{
    cin >> n >> m;

    for (ll i = 1; i <= n; i++)
        cin >> a[i];

    for (ll i = 1; i <= m; i++)
    {
        cin >> u >> v;
        edges[u].push_back(v);
        edges[v].push_back(u);
    }

    ll ans = 0;
    for (ll i = 1; i <= n; i++)
    {
        if (!visited[i])
            ans += dfs(i);
    }

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
