#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long

const ll array_size = 1e6 + 1;
ll t,n,m,k,x,y,z,u,v;
ll a[array_size],b[array_size],c[array_size];
string s;

int possible = 1;
vector<vector<ll>> edges(100005);
bool visited[100005];
bool color[100005];

void dfs(ll vertex, bool col)
{
    if (visited[v])
        return;

    visited[vertex] = true;
    color[vertex] = col;

    for (ll x : edges[vertex])
    {
        if (!visited[x])
            dfs(x, !col);
        else if (color[x] == col)
                possible = 0;
    }
}

void solve()
{
    cin >> n >> m;

    memset(visited, false, sizeof(visited));

    for (ll i = i; i <= m; i++)
    {
        cin >> u >> v;
        edges[u].push_back(v);
        edges[v].push_back(u);
    }

    for (ll i = 1; i <= n; i++)
    {
        if (!visited[i])
        {
            dfs(i, 0);
        }
    }

    if (possible)
    {
        ll cnt[2] = {0};
        for (ll i = 1; i <= n; i++)
            cnt[color[i]]++;

        cout << cnt[0] << endl;
        for (ll i = 1; i <= n; i++)
        {
            if (!color[i])
                cout << i << " ";
        }
        cout << endl;

        cout << cnt[1] << endl;
        for (ll i = 1; i <= n; i++)
        {
            if (color[i])
                cout << i << " ";
        }
        cout << endl;
    }
    else
        cout << -1 << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}
