#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define vl vector<ll>
#define vs vector<string>
#define vc vector<char>
#define vb vector<bool>
#define vvl vector<vector<ll>>
#define vvb vector<vector<bool>>

const int MOD = 1e9 + 7;
const int MAX_ARRAY_SIZE = 1e6 + 1;
ll t,n,m,k,x,y,z,u,v;
ll h,w;
ll a[MAX_ARRAY_SIZE], b[MAX_ARRAY_SIZE];
string s;

void dfs(vs &graph, ll x, ll y, bool &hitEdge)
{
    if (x < 0 || x >= h || y < 0 || y >= w || graph[x][y] == '#')
        return;

    if (x == 0 || x == h-1 || y == 0 || y == w-1)
        hitEdge = true;

    graph[x][y] = '#';
    dfs(graph,x+1,y,hitEdge);
    dfs(graph,x-1,y,hitEdge);
    dfs(graph,x,y+1,hitEdge);
    dfs(graph,x,y-1,hitEdge);
}

void solve()
{
    cin >> h >> w;
    vs v(h);
    for (ll i = 0; i < h; ++i)
        cin >> v[i];

    ll ans = 0;
    for (ll i = 0; i < h; ++i)
    {
        for (ll j = 0; j < w; ++j)
        {
            if (v[i][j] == '.')
            {
                bool hitEdge = false;
                dfs(v,i,j,hitEdge);

                if (!hitEdge)
                    ++ans;
            }
        }
    }

    cout << ans << '\n';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}
