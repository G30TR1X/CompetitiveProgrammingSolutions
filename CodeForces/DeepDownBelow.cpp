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

class compare {
    public:
    bool operator() (vl a, vl b) {
        return a[0] > b[0];
    }
};

void solve()
{
    cin >> n;
    vector<pair<ll,ll>> a;
    for (ll i = 0; i < n; ++i)
    {
        vl v;
        cin >> m;
        for (ll j = 0; j < m; ++j)
        {
            cin >> x;
            v.push_back(x-j+1);
        }

        sort(v.begin(), v.end());
        a.push_back({v[m-1], m});
    }

    sort(a.begin(), a.end());
    
    ll ans = 0, inc = 0;
    for (auto m : a)
    {
        ans = max(ans, m.first - inc);
        inc += m.second;
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
