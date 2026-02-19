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
    cin >> n >> x >> y;
    map<ll, vl> mp;
    for (ll i = 0; i < n; ++i)
    {
        cin >> a[i];
        mp[a[i] % y].push_back(a[i] % x);
    }

    ll ans = 0;
    for (auto [k, v] : mp)
    {
        map<ll,ll> mp1;
        for (ll i = 0; i < v.size(); ++i)
            mp1[v[i]]++;

        for (auto [k1, v1] : mp1)
        {
            if (k1 == 0 || (k1 == x / 2 && x % 2 == 0))
            {
                ans += v1 * (v1 - 1) / 2;
                mp1[k1] = 0;
            }
            else
            {
                ans += v1 * mp1[x - k1];
                mp1[x - k1] = 0;
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

    //freopen("input.txt", "r", stdin);

    cin >> t;
    while (t--)
        solve();

    return 0;
}
