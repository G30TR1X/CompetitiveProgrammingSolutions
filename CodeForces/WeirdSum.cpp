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
const int MAX_ARRAY_SIZE = 1e5;
ll t,n,m,k,x,y,z,u,v;
string s;

void solve()
{
    cin >> n >> m;
    vvl row(MAX_ARRAY_SIZE);
    vvl col(MAX_ARRAY_SIZE);
    for (ll i = 0; i < n; ++i)
    {
        for (ll j = 0; j < m; ++j)
        {
            cin >> x;
            row[x-1].push_back(i);
            col[x-1].push_back(j);
        }
    }

    ll ans = 0;
    for (ll i = 0; i < MAX_ARRAY_SIZE; ++i)
    {
        if (row[i].size() < 2 || col[i].size() < 2)
            continue;

        sort(row[i].begin(), row[i].end());
        sort(col[i].begin(), col[i].end());

        ll size = row[i].size();
        for(ll j = 0; j < size; ++j)
            ans += (row[i][j] * (2ll * j - size + 1ll));

        for(ll j = 0; j < size; ++j)
            ans += (col[i][j] * (2ll * j - size + 1ll));
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
