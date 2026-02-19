#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long

const ll array_size = 1e6 + 1;
ll t,n,m,k,x,y,z,u,v;
ll a[array_size],b[array_size],c[array_size];
string s;

void solve()
{
    cin >> n;
    ll ans = 1;
    for (; n % ans == 0; ++ans);

    cout << ans-1 << endl;

    /* Possible solution, but too slow O(sqrt n + sqrt n / log n)
    cin >> n;
    set<ll> factor;

    for (ll i = 1; i * i <= n; ++i)
    {
        if (n % i == 0)
        {
            factor.insert(i);
            factor.insert(n / i);
        }
    }

    ll maxInterval = 0, l = 0, r = 0, last = *factor.begin();
    for (ll f : factor)
    {
        if (last+1 != f)
            l = r;

        maxInterval = max(maxInterval, r - l + 1);
        ++r;
        last = f;
    }

    cout << maxInterval << endl;
    */
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
