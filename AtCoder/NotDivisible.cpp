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
    cin >> n;
    ll maxA = 0;
    unordered_map<ll, ll> mp;
    for (ll i = 0; i < n; ++i)
    {
        cin >> a[i];
        maxA = max(maxA, a[i]);
        mp[a[i]]++;
    }

    vector<bool> sieve(maxA+1, true);
    for (ll i = 0; i < n; ++i)
    {
        if (sieve[a[i]])
        {
            for (ll j = 2 * a[i]; j <= maxA; j += a[i])
                sieve[j] = false;

            if (mp[a[i]] > 1)
                sieve[a[i]] = false;
        }
    }

    ll ans = 0;
    for (ll i = 0; i < n; ++i)
    {
        if (sieve[a[i]])
            ++ans;
    }

    cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}
