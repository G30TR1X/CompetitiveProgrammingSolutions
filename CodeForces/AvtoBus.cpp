#include <bits/stdc++.h>
#include <pthread.h>
using namespace std;

#define ll long long
#define ull unsigned long long

const int MOD = 1e9 + 7;
const ll array_size = 1e6 + 1;
ll t,n,m,k,x,y,z,u,v;
ll a[array_size],b[array_size],c[array_size];
string s;

void solve()
{
    cin >> n;

    if (n % 2 == 1 || n < 4)
    {
        cout << -1 << endl;
        return;
    }

    ll mn = LONG_LONG_MAX, mx = LONG_LONG_MIN, sixDiv, fourDiv;
    mx = max(mx, n/4);

    if (n >= 6)
    {
        sixDiv = n/6;
        if (((n - (sixDiv * 6)) % 4) == 0)
            mn = min(mn, sixDiv + ((n - (sixDiv * 6)) / 4));
        else
            mn = min(mn, sixDiv-1 + ((n - ((sixDiv-1) * 6)) / 4));
    }
    else
        mn = min(mn, n/4);

    cout << mn << " " << mx << endl;
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
