#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;

#define ll long long
#define ull unsigned long long
#define vl vector<ll>
#define vs vector<string>
#define vc vector<char>
#define vb vector<bool>
#define vvl vector<vector<ll>>
#define vvb vector<vector<bool>>
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>

const int MOD = 1e9 + 7;
const int MAX_ARRAY_SIZE = 1e6 + 1;
ll t,n,m,k,x,y,z,u,v;
ll a[MAX_ARRAY_SIZE], b[MAX_ARRAY_SIZE];
string s;

void solve()
{
    cin >> n;
    vvl pos(n+1);
    for (ll i = 0; i < n; ++i)
    {
        cin >> a[i];
        pos[a[i]].push_back(i);
    }

    vl ans(n, -1);
    for (ll i = 1; i <= n; ++i)
    {
        if (pos[i].empty())
            continue;

        ll mx = pos[i][0] + 1;
        for (ll j = 1; j < pos[i].size(); ++j)
            mx = max(mx, pos[i][j] - pos[i][j-1]);

        mx = max(mx, n - pos[i].back());
        for (ll j = mx-1; j < n; ++j)
        {
            if (ans[j] != -1)
                break;

            ans[j] = i;
        }
    }

    for (ll a : ans)
        cout << a << ' ';
    cout << '\n';
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
