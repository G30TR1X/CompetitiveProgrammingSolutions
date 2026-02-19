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
    vector<pair<ll,ll>> p;
    for (ll i = 0; i < n; ++i)
    {
        cin >> x;
        p.push_back({x,i});
    }

    sort(p.begin(), p.end());
    ll ans = 0;
    for (ll i = 0; i < n; ++i)
    {
        for (ll j = i+1; j < n; ++j)
        {
            if (p[i].first * p[j].first >= 2*n)
                break;

            if (p[i].first * p[j].first == p[i].second+1 + p[j].second+1)
                ++ans;
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
