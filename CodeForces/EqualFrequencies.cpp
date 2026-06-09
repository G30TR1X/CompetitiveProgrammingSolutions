#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;

#define ll long long
#define ull unsigned long long
#define vl vector<ll>
#define vs vector<string>
#define vc vector<char>
#define vb vector<bool>
#define vvl vector<vector<ll>>
#define vvb vector<vector<bool>>
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>

const int MOD = 1e9 + 7;
const int MAX_ARRAY_SIZE = 1e6 + 1;

class compare {
    public:
    bool operator() (pair<int,int> a, pair<int,int> b) {
        return a.first > b.first;
    }
};

struct dsu {
    int n;
    vector<int> parent;
    vector<int> sz;

    dsu(int n) : n(n), parent(n+1), sz(n+1, 1)
    {
        for (int i = 1; i <= n; ++i)
            parent[i] = i;
    }

    int rep(int x)
    {
        return parent[x] == x ? x : parent[x] = rep(parent[x]);
    }

    void join(int x, int y)
    {
        x = rep(x);
        y = rep(y);

        if (sz[x] < sz[y])
            swap(x, y);

        parent[y] = x;
        sz[x] += sz[y];
    }

    bool check(int x, int y)
    {
        return rep(x) == rep(y);
    }
};

ll powMOD(ll a, ll b)
{
    if (b == 0)
        return 1;

    if (b == 1)
        return a%MOD;

    if (b & 1)
    {
        ll res = powMOD(a, (b-1)/2);
        res = res*res%MOD;
        return (res*a%MOD);
    }
    else
    {
        ll res = powMOD(a, b/2);
        return (res*res%MOD);
    }
}

ll addMOD(ll a, ll b)
{
    return ((a%MOD)+(b%MOD))%MOD;
}

ll subMOD(ll a, ll b)
{
    return ((a%MOD)-(b%MOD)+MOD)%MOD;
}

ll mulMOD(ll a, ll b)
{
    return ((a%MOD)*(b%MOD))%MOD;
}

ll divMOD(ll a, ll b)
{
    a %= MOD;
    ll inv_b = powMOD(b, MOD - 2);
    ll res = (a*b)%MOD;
    return res;
}

ll logba(ll a, ll b)
{
    return log2(a)/log2(b);
}

ll t,n,m,k,x,y,z,u,v;
ll a[MAX_ARRAY_SIZE], b[MAX_ARRAY_SIZE];
string s;

void solve()
{
    cin >> n >> s;
    vector<pair<ll,char>> freq(26);
    for (ll i = 0; i < 26; ++i)
        freq[i].second = 'a' + i;

    for (ll i = 0; i < n; ++i)
        freq[s[i] - 'a'].first++;

    sort(freq.rbegin(), freq.rend());

    ll changes = n, best_k = 1;
    for (ll k = 1; k <= 26; ++k)
    {
        if (n % k != 0)
            continue;

        ll unchanged = 0;
        for (ll i = 0; i < k; ++i)
            unchanged += min(freq[i].first, n/k);

        if (n - unchanged < changes)
        {
            changes = n - unchanged;
            best_k = k;
        }
    }

    map<char,ll> mp;
    for (ll i = 0; i < best_k; ++i)
        mp[freq[i].second] = n / best_k;

    string ans(n, ' ');
    for (ll i = 0; i < n; ++i)
    {
        if (mp[s[i]] > 0)
        {
            ans[i] = s[i];
            mp[s[i]]--;
        }
    }

    for (ll i = 0; i < n; ++i)
    {
        if (ans[i] != ' ')
            continue;

        while (!mp.empty() && (*mp.begin()).second == 0)
            mp.erase(mp.begin());

        char ch = (*mp.begin()).first;
        ans[i] = ch;
        mp[ch]--;
    }

    cout << changes << '\n' << ans << '\n';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> t;
    while (t--)
        solve();

    return 0;
}
