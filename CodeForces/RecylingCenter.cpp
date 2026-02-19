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
    cin >> n >> m;
    vector<ll> trash(n);
    for (ll i = 0; i < n; i++)
        cin >> trash[i];

    sort(trash.rbegin(), trash.rend());

    ll multiplier = 1, ans = 0;
    for (ll i = 0; i < n; i++)
    {
        if (trash[i] * multiplier <= m)
        {
            ans++;
            multiplier *= 2;
        }
    }

    cout << n - ans << endl;
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
