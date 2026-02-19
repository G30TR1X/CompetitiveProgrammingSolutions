#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long

ll badNumber(ll n)
{
    return (n/2 + n/3 + n/5 + n/7) - (n/6 + n/10 + n/14 + n/15 + n/21 + n/35) + (n/30 + n/42 + n/70 + n/105) - (n/210);
}

void solve()
{
    ll l,r;
    cin >> l >> r;
    ll goodRight = badNumber(r);
    ll goodLeft = badNumber(l-1);
    goodRight = r - goodRight;
    goodLeft = (l-1) - goodLeft;
    cout << goodRight - goodLeft << endl;
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
