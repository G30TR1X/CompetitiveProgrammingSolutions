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
    cin >> n >> k;
    vector<pair<ll,ll>> coor(n);
    for (ll i = 0; i < n; ++i)
    {
        cin >> x >> y;
        coor[i] = {x,y};
    }

    for (ll i = 0; i < n; ++i)
    {
        ll dist = 0;
        for (ll j = 0; j < n; ++j)
        {
            if (i == j)
                continue;

            dist = max(dist, (abs(coor[i].first - coor[j].first) + abs(coor[i].second - coor[j].second)));
        }

        if (dist <= k)
        {
            cout << 1 << '\n';
            return;
        }
    }

    cout << -1 << '\n';
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
