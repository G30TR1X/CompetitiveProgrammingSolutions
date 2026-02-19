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
ll t,n,m,k,x,y,z,w,h;
ll a[MAX_ARRAY_SIZE], b[MAX_ARRAY_SIZE];
string s;

void solve()
{
    cin >> w >> h;
    vector<pair<ll,ll>> w1,w2,h1,h2;
    ll k1,k2,k3,k4;

    cin >> k1;
    for (ll i = 0; i < k1; ++i)
    {
        cin >> x;
        w1.push_back({x,0});
    }

    cin >> k2;
    for (ll i = 0; i < k2; ++i)
    {
        cin >> x;
        w2.push_back({x,h});
    }

    cin >> k3;
    for (ll i = 0; i < k3; ++i)
    {
        cin >> y;
        h1.push_back({0,y});
    }

    cin >> k4;
    for (ll i = 0; i < k4; ++i)
    {
        cin >> y;
        h2.push_back({w,y});
    }

    ll area1 = (w1[k1-1].first - w1[0].first) * h;
    ll area2 = (w2[k2-1].first - w2[0].first) * h;
    ll area3 = (h1[k3-1].second - h1[0].second) * w;
    ll area4 = (h2[k4-1].second - h2[0].second) * w;

    cout << max(area1, max(area2, max(area3, area4))) << endl;
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
