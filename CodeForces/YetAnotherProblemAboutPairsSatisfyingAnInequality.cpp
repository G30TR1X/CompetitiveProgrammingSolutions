#include <algorithm>
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
    bool operator() (pair<ll,ll> a, pair<ll,ll> b) {
        if (a.first == b.first)
            return a.second < b.second;
        return a.first < b.first;
    }
};

void solve()
{
    cin >> n;
    vector<pair<ll,ll>> a;
    for (ll i = 1; i <= n; ++i)
    {
        cin >> x;
        if (x < i)
            a.push_back({x,i});
    }

    sort(a.begin(), a.end(), compare());

    ll ans = 0, newN = a.size();
    vl first(newN), second(newN);
    for (ll i = 0; i < newN; ++i)
        first[i] = a[i].first, second[i] = a[i].second;

    for (ll i = 0; i < newN; ++i)
    {
        ll index = upper_bound(first.begin(), first.end(), second[i]) - first.begin();
        ans += newN - index;
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
