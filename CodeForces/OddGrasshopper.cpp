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
    cin >> x >> n;
    if (n % 4 == 0)
    {
        cout << x << endl;
        return;
    }

    ll leftRight;
    if (x % 2 == 0)
        leftRight = -1;
    else
        leftRight = 1;


    ll finalJump = n % 4;
    for (ll jump = n - finalJump + 1; jump <= n; jump++)
    {
        if (jump % 4 == 2)
            leftRight *= -1;

        x += jump * leftRight;
    }

    cout << x << endl;
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
