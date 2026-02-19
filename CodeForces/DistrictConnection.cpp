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
ll a[MAX_ARRAY_SIZE], b[MAX_ARRAY_SIZE];
string s;

void solve()
{
    cin >> n;
    for (ll i = 1; i <= n; ++i)
        cin >> a[i];

    vector<pair<ll,ll>> ans;
    ll val1 = 1, val2 = -1;
    for (ll i = 2; i <= n; ++i)
    {
        if (a[val1] != a[i])
        {
            ans.push_back({val1, i});
            val2 = i;
            break;
        }
    }

    if (val2 == -1)
    {
        cout << "NO\n";
        return;
    }

    for (ll i = 2; i <= n; ++i)
    {
        if (i == val2)
            continue;

        if (a[i] == a[val1])
            ans.push_back({i, val2});
        else
            ans.push_back({i, val1});
    }

    cout << "YES\n";
    for (auto [x, y] : ans)
        cout << x << " " << y << '\n';
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
