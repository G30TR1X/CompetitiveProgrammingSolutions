#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define vl vector<ll>
#define vs vector<string>

const int MOD = 1e9 + 7;
const int MAX_ARRAY_SIZE = 1e6 + 1;
ll t,n,m,k,x,y,z,u,v;
ll a[MAX_ARRAY_SIZE], b[MAX_ARRAY_SIZE];
string s;

void dfs(vs &maze, vector<vector<bool>> &visited, ll i, ll j)
{
    if (i < 0 || i >= n || j < 0 || j >= m || visited[i][j] || maze[i][j] == '#')
        return ;

    visited[i][j] = true;
    dfs(maze, visited, i+1, j);
    maze[i+1][j] = 'X', --k;
    if (k == 0)
        return;

    dfs(maze, visited, i-1, j);
    maze[i-1][j] = 'X', --k;
    if (k == 0)
        return;

    dfs(maze, visited, i, j+1);
    maze[i][j+1] = 'X', --k;
    if (k == 0)
        return;

    dfs(maze, visited, i, j-1);
    maze[i][j-1] = 'X', --k;
}

void solve()
{
    freopen("input.txt", "r", stdin);

    cin >> n >> m >> k;
    vs maze(600);
    vector<vector<bool>> visited(600, vector<bool>(600, false));
    for (ll i = 0; i < n; ++i)
        cin >> maze[i];

    for (ll i = 0; i < n; ++i)
    {
        ll traverse = 0;
        for (ll j = 0; j < m; ++j)
        {
            if (visited[i][j] || maze[i][j] == '#')
                continue;

            dfs(maze, visited, i, j);
            traverse = 1;
        }

        if (traverse)
            break;
    }

    for (ll i = 0; i < n; ++i)
        cout << maze[i] << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}
