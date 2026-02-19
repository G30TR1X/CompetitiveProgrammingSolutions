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
ll t,n,m,k,z,u,v;
ll x[MAX_ARRAY_SIZE], y[MAX_ARRAY_SIZE];
string s;

class compare {
    public:
    bool operator() (pair<ll,ll> a, pair<ll,ll> b) {
        return (a.first - a.second) > (b.first - b.second);
    }
};


void solve()
{
    cin >> n;
    for (ll i = 0; i < n; ++i)
        cin >> x[i];

    vector<pair<ll,ll>> pairs(n);
    for (ll i = 0; i < n; ++i)
        cin >> y[i];

    multiset<ll> diff;
    for (ll i = 0; i < n; ++i)
        diff.insert(y[i] - x[i]);

    ll ans = 0;
    while (diff.size() > 1)
    {
        ll first = *diff.begin();
        diff.erase(diff.begin());

        auto it = diff.lower_bound(-first);
        if (it == diff.end())
            continue;

        ++ans;
        diff.erase(it);
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
