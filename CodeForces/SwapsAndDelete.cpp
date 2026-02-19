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
    cin >> s;
    ll zero = 0, one = 0;
    for (ll i = 0; i < s.size(); ++i)
    {
        if (s[i] == '0')
            ++zero;
        else
            ++one;
    }

    for (ll i = 0; i < s.size(); ++i)
    {
        if (s[i] == '0')
        {
            if (one == 0)
            {
                cout << zero << endl;
                return;
            }
            --one;
        }
        else
        {
            if (zero == 0)
            {
                cout << one << endl;
                return;
            }
            --zero;
        }
    }

    cout << 0 << endl;
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
