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
    cin >> x >> y >> z;

    ll newX = y - (z - y);
    if (newX >= x && newX % x == 0 && newX != 0)
    {
        cout << "YES" << endl;
        return;
    }

    ll newY = x + (z - x)/2;
    if (newY >= y && (z - x) % 2 == 0 && newY % y == 0 && newY != 0)
    {
        cout << "YES" << endl;
        return;
    }

    ll newZ = x + 2*(y - x);
    if (newZ >= z && newZ % z == 0 && newZ != 0)
    {
        cout << "YES" << endl;
        return;
    }

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
