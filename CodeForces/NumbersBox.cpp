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
string s;

void solve()
{
    cin >> n >> m;
    ll grid[10][10];
    for (ll i = 0; i < n; ++i)
        for (ll j = 0; j < m; ++j)
            cin >> grid[i][j];

    ll ans = 0, negative = 0, smallest = INT_MAX;
    for (ll i = 0; i < n; ++i)
    {
        for (ll j = 0; j < m; ++j)
        {
            ans += abs(grid[i][j]);
            negative += grid[i][j] <= 0 ? 1 : 0;
            smallest = min(smallest, abs(grid[i][j]));
        }
    }

    if (smallest == INT_MAX)
        smallest = 0;

    cout << ((negative & 1) ? ans - 2*smallest : ans) << endl;
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
