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
    for (ll i = 0; i < n; i++)
        cin >> b[i];

    ll minimum = b[0];
    bool possible = true;
    for (ll i = 0; i < n; i++)
    {
        if (b[i] >= 2*minimum)
        {
            possible = false;
            break;
        }

        minimum = min(minimum, b[i]);
    }

    if (possible)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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
