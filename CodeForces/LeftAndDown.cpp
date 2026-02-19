#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long

void solve()
{
    ll a,b,k;
    cin >> a >> b >> k;

    if (k >= a && k >= b)
    {
        cout << 1 << endl;
        return;
    }

    ll gcd = __gcd(a,b);
    ll dx = a/gcd, dy = b/gcd;

    if (dx <= k && dy <= k)
        cout << 1 << endl;
    else
        cout << 2 << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}
