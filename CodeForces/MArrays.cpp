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
    cin >> n >> m;
    map<ll,ll> mp;
    for (ll i = 0; i < n; ++i)
    {
        cin >> a[i];
        a[i] %= m;
        mp[a[i]]++;
    }

    ll ans = 0;
    for (auto [num, count] : mp)
    {
        if (count == 0)
            continue;

        ll diff = m - num;
        if (diff == m)
        {
            ++ans, mp[num] = 0;
            continue;
        }

        if (mp.find(diff) == mp.end())
        {
            ans += count, mp[num] = 0;
            continue;
        }

        ll countDiff = abs(count - mp[diff]);
        ans += max(1ll, countDiff);

        mp[num] = 0;
        mp[diff] = 0;
    }

    cout << ans << '\n';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    freopen("input.txt", "r", stdin);

    cin >> t;
    while (t--)
        solve();

    return 0;
}
