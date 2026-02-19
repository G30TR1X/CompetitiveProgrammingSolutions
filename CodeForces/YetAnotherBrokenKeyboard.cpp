#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long

const int MOD = 1e9 + 7;
const ll array_size = 1e6 + 1;
ll t,n,m,k,x,y,z,u,v;
ll a[array_size];
string s;

void solve()
{
    cin >> n >> m >> s;
    unordered_set<char> keys;
    for (ll i = 0; i < m; ++i)
    {
        char c;
        cin >> c;
        keys.insert(c);
    }

    ll ans = 0, l = 0;
    for (ll r = 0; r < n; ++r)
    {
        if (keys.find(s[r]) == keys.end())
            continue;

        l = r;
        while (r < n && keys.find(s[r]) != keys.end())
            r++;

        ll length = r-l;
        ans += length*(length+1)/2;
    }

    cout << ans << endl;

    /* // DP Method
    bool typeable[26] = {false};
    for (ll i = 0; i < m; ++i)
    {
        char c;
        cin >> c;
        typeable[c - 'a'] = true;
    }

    for (ll i = 0; i < n; ++i)
        a[i] = (typeable[s[i] - 'a']) ? 1 : 0;

    ll f[n+1], ans = 0;
    f[0] = 0;
    for (ll i = 0; i < n; ++i)
    {
        if (a[i] == 0)
            f[i+1] = 0;
        else
            f[i+1] = f[i] + 1;

        ans += f[i+1];
    }

    cout << ans << endl;
    */
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}
