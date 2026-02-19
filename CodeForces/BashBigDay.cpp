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
    unordered_map<ll, ll> factors;
    cin >> n;

    while (n--)
    {
        cin >> x;

        ll sqr = sqrt(x);
        for (ll i = 2; i <= sqr; ++i)
        {
            if (x % i == 0)
                factors[i]++;

            while (x % i == 0)
                x /= i;
        }

        if (x > 1)
            factors[x]++;
    }

    ll ans = 1;
    for (auto x : factors)
        ans = max(ans, x.second);

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
