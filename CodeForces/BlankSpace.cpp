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
    ll max_consecutive = 0;
    ll zero = 0;
    for (ll i = 0; i < n; ++i)
    {
        cin >> x;

        if (x == 0)
            ++zero;
        else
            zero = 0;

        max_consecutive = max(max_consecutive, zero);
    }

    cout << max_consecutive << endl;
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
