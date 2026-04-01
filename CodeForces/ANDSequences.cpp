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

ll mulMOD(ll a, ll b);

void solve()
{
    cin >> n;
    map<ll,ll> mp;
    for (ll i = 0; i < n; ++i)
    {
        cin >> a[i];
        mp[a[i]]++;
    }

    ll ands = a[0];
    for (ll i = 1; i < n; ++i)
        ands &= a[i];

    if (mp.find(ands) != mp.end() && mp[ands] > 1)
    {
        if (mp[ands] == n)
        {
            ll ans = n;
            for (ll i = n-1; i > 1; --i)
                ans = mulMOD(ans, i);

            cout << ans << '\n';
            return;
        }

        ll pairs = (mp[ands]*(mp[ands]-1)), cnt1 = n - 2;

        for (ll i = cnt1-1; i > 1; --i)
            cnt1 = mulMOD(cnt1, i);

        ll ans = mulMOD(pairs, cnt1);
        cout << ans << '\n';
        return;
    }

    cout << "0\n";
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

ll mulMOD(ll a, ll b)
{
    return ((a%MOD)*(b%MOD))%MOD;
}

