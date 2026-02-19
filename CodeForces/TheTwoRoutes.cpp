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

void solve()
{
    cin >> n >> m;
    ll graph[500][500];
    for(int i = 0; i < m; i++)
    {
        cin >> u >> v;
        graph[u][v] = 1;
        graph[v][u] = 1;
    }

    ll car = !graph[1][n];

    bool vis[500];
    for (ll i = 1; i <= n; ++i)
        vis[i] = false;

    bool exist = false;
    ll dist = 0;
    queue<ll> q;
    q.push(1);
    vis[1] = 1;
    while (!q.empty())
    {
        ll path = q.size();
        for (ll i = 0; i < path; ++i)
        {
            ll curr = q.front();
            q.pop();
            for (ll j = 1; j <= n; ++j)
            {
                if (vis[j])
                    continue;

                if (graph[curr][j] == car)
                {
                    if (j == n)
                    {
                        exist = true;
                        break;
                    }
                    vis[j] = 1;
                    q.push(j);
                }
            }

            if (exist)
                break;
        }

        ++dist;
        if (exist)
            break;
    }

    if (!exist)
    {
        cout << -1 << endl;
        return;
    }

    cout << max(1ll, dist) << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}
