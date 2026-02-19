#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long

void solve()
{
    ll n, k;
    cin >> n >> k;
    if (n % 2)
    {
        k--;
        ll intersect = k / ((n-1)/2);
        cout << 1 + (k + intersect) % n << endl;
    }
    else
        cout << ((k % n == 0) ? n : k % n) << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
