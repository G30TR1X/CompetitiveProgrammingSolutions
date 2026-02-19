#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long

const int MOD = 1e9 + 7;
const ll array_size = 1e6 + 1;
ll t,n,m,k,x,y,z,u,v;
ll a[array_size];
string s;

void solve()
{
    cin >> n;
    for (ll i = 0; i < n; ++i)
        cin >> a[i];

    for (ll i = 0; i < n; ++i)
    {
        ll sqr = sqrt(a[i]);

        if (sqr * sqr == a[i] && a[i] != 1)
        {
            bool Tprime = true;
            for (ll i = 2; i*i <= sqr; ++i)
            {
                if (sqr % i == 0)
                {
                    Tprime = false;
                    break;
                }
            }

            if (Tprime)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
        else
            cout << "NO" << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}
