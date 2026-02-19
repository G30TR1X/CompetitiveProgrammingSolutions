#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long

const int MOD = 1e9 + 7;
const ll array_size = 1e6 + 1;
ll t,n,m,k,x,y,z,u,v;
ll a[array_size], b[array_size];
string s;

void solve()
{
    cin >> n;
    for (ll i = 0; i < n; ++i)
        cin >> a[i];

    for (ll i = 0; i < n; ++i)
        cin >> b[i];

    if (a[n-1] != b[n-1])
    {
        cout << "NO" << endl;
        return;
    }

    for (ll i = 0; i < n-1; ++i)
    {
        if (a[i] != b[i])
        {
            if ((a[i] ^ a[i+1]) == b[i])
            {
                a[i] ^= a[i+1];
                i = 0;
            }
        }
    }

    for (ll i = 0; i < n; ++i)
    {
        if (a[i] != b[i])
        {
            cout << "NO" << endl;
            return;
        }
    }

    cout << "YES" << endl;
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
