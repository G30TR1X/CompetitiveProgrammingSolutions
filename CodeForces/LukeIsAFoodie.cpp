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
    cin >> n >> x;
    for (ll i = 0; i < n; ++i)
        cin >> a[i];

    vector<pair<ll, ll>> segments;
    for (ll i = 0; i < n; ++i)
        segments.push_back({a[i]-x, a[i]+x});

    ll ans = 0, l = segments[0].first, r = segments[0].second;
    for (ll i = 1; i < n; ++i)
    {
        l = max(l, segments[i].first);
        r = min(r, segments[i].second);

        if (l > r)
        {
            ++ans;
            l = segments[i].first;
            r = segments[i].second;
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
