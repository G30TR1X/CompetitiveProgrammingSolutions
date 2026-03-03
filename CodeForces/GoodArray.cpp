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
    map<ll, vector<ll>> mp;
    ll sum = 0;
    for (ll i = 0; i < n; ++i)
    {
        cin >> a[i];
        mp[a[i]].push_back(i);
        sum += a[i];
    }
    
    set<ll> ans;
    for (ll i = 0; i < n; ++i)
    {
        ll diff = sum - (a[i] * 2);
        if (mp.find(diff) != mp.end() && mp[diff].size() > 0)
        {
            for (ll j = 0; j < mp[diff].size(); ++j)
                if (mp[diff][j] != i)
                    ans.insert(mp[diff][j]);
        }
    }

    cout << ans.size() << '\n';
    for (ll a : ans)
        cout << a + 1 << " ";
    cout << '\n';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}
