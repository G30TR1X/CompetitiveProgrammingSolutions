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

class compare {
    public:
    bool operator() (pair<int,int> a, pair<int,int> b) {
        if (a.first == b.first)
            return a.second > b.second;

        return a.first < b.first;
    }
};

void solve()
{
    cin >> n;
    for (ll i = 0; i < n; ++i)
        cin >> a[i];
    for (ll i = 0; i < n; ++i)
        cin >> b[i];

    vector<pair<ll,ll>> diff(n);
    for (ll i = 0; i < n; ++i)
        diff[i] = {a[i] - b[i], i+1};

    sort(diff.rbegin(), diff.rend(), compare());
    ll highest = diff[0].first, cnt = 0;
    for (auto [f,v] : diff)
    {
        if (f == highest)
            ++cnt;
        else
            break;
    }

    cout << cnt << '\n';
    for (ll i = 0; i < n; ++i)
    {
        if (diff[i].first == highest)
            cout << diff[i].second << " ";
        else
            break;
    }
    cout << '\n';

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
