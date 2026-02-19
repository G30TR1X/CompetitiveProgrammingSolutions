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
    string winner;
    cin >> x >> y >> z;
    if (z % 2 == 1)
    {
        if (x >= y)
            winner = "First";
        else
            winner = "Second";
    }
    else
    {
        if (x <= y)
            winner = "Second";
        else
            winner = "First";
    }

    cout << winner << endl;
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
