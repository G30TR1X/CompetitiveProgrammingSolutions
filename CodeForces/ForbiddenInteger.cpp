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
    cin >> n >> k >> x;

    if (k == 1 && x == 1)
    {
        cout << "NO" << endl;
        return;
    }

    if (x != 1)
    {
        cout << "YES" << endl;
        cout << n << endl;
        for (ll i = 0; i < n; ++i)
            cout << 1 << " ";
        cout << endl;
        return;
    }

    if (n % 2 == 0)
    {
        cout << "YES" << endl;
        cout << n/2 << endl;
        for (ll i = 0; i < n/2; ++i)
            cout << 2 << " ";
        cout << endl;
    }
    else if (n == 3)
    {
        if (k == 3)
        {
            cout << "YES" << endl;
            cout << 1 << endl;
            cout << 3 << endl;
        }
        else
            cout << "NO" << endl;
    }
    else if (n == 5)
    {
        if (k >= 3)
        {
            cout << "YES" << endl;
            cout << n/2 << endl;
            for (ll i = 0; i < (n/2)-1; ++i)
                cout << 2 << " ";
            cout << 3 << endl;
        }
        else
            cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
        cout << n/2 << endl;
        for (ll i = 0; i < (n/2)-1; ++i)
            cout << 2 << " ";
        cout << 3 << endl;
    }
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
