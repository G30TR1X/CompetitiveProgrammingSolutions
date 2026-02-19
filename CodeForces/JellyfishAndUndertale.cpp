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
    cin >> x >> y >> n;
    ll ans = y;
    for (ll i = 0; i < n; ++i)
    {
        cin >> k;
        ans += min(k, x-1);
    }

    cout << ans << endl;

    /* O(n log n + n)
    cin >> x >> y >> n;
    vector<ll> tool(n);
    for (ll i = 0; i < n; ++i)
        cin >> tool[i];

    sort(tool.begin(), tool.end());

    ll index = 0, ans = 0;
    while (index < n)
    {
        for (; index < n; ++index)
        {
            if (y + tool[index] <= x)
                y += tool[index];
            else if (y == 1)
                y = x;
            else
                break;
        }

        if (y-1 == 0)
            break;

        ans += y-1;
        y = 1;
    }

    ans += y;

    cout << ans << endl;
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
