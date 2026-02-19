#include <bits/stdc++.h>
#include <climits>
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
ll t,n,m,k,x,y,z,u,v,a,b;
string s;

void solve()
{
    cin >> n >> k >> a >> b;
    vector<pair<ll,ll>> city;
    for (ll i = 0; i < n; ++i)
    {
        cin >> x >> y;
        city.push_back({x,y});
    }

    ll ans = abs(city[a-1].first - city[b-1].first) + abs(city[a-1].second - city[b-1].second);
    ll travel1 = abs(city[a-1].first - city[0].first) + abs(city[a-1].second - city[0].second);
    ll travel2 = abs(city[0].first - city[b-1].first) + abs(city[0].second - city[b-1].second);
    for (ll i = 0; i < n; ++i)
    {
        if (i < k)
        {
            ll cost1 = abs(city[a-1].first - city[i].first) + abs(city[a-1].second - city[i].second);
            ll cost2 = abs(city[i].first - city[b-1].first) + abs(city[i].second - city[b-1].second);
            travel1 = min(travel1, cost1);
            travel2 = min(travel2, cost2);
            ans = min(ans, cost1+cost2);
            ans = min(ans, travel1+travel2);
        }
        else
        {
            ll cost1 = abs(city[a-1].first - city[i].first) + abs(city[a-1].second - city[i].second);
            ll cost2 = abs(city[i].first - city[b-1].first) + abs(city[i].second - city[b-1].second);
            ans = min(ans, cost1+cost2);
        }
    }

    cout << ans << endl;
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
