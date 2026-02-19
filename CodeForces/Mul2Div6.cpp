#include <bits/stdc++.h>
#include <climits>
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
    // Intended Approach
    ll fac2 = 0, fac3 = 0;
    while (n % 2 == 0)
    {
        n /= 2;
        ++fac2;
    }

    while (n % 3 == 0)
    {
        n /= 3;
        ++fac3;
    }

    if (n == 1 && fac2 <= fac3)
        cout << 2 * fac3 - fac2 << endl;
    else
        cout << -1 << endl;

/* Naive Approach Yet Works (somehow...)
    ll ops = 0;
    while (n > 1)
    {
        if (n >= INT_MAX)
        {
            ops = -1;
            break;
        }

        if (n % 6 == 0)
            n /= 6;
        else
            n *= 2;

        ++ops;
    }

    cout << ops << endl;
*/
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
