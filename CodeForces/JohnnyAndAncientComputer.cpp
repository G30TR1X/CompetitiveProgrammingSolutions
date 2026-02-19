#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define vl vector<ll>
#define vs vector<string>
#define vc vector<char>
#define vb vector<bool>
#define vvl vector<vector<ll>>
#define vvb vector<vector<bool>>

const int MOD = 1e9 + 7;
const int MAX_ARRAY_SIZE = 1e6 + 1;
ll t,n,m,k,a,b;
string s;

void solve()
{
    cin >> a >> b;

    ll ops = 0;
    if (b > a)
    {
        while (b > a)
        {
            ll time = -1;
            if (a*2 <= b)
                time = 2;
            if (a*4 <= b)
                time = 4;
            if (a*8 <= b)
                time = 8;

            if (time == -1)
            {
                cout << -1 << endl;
                return;
            }

            a *= time;
            ++ops;
        }
    }
    else
    {
        while (b < a)
        {
            ll div = -1;
            if ((a % 2) == 0 && a / 2 >= b)
                div = 2;
            if ((a % 4) == 0 && a / 4 >= b)
                div = 4;
            if ((a % 8) == 0 && a / 8 >= b)
                div = 8;

            if (div == -1)
            {
                cout << -1 << endl;
                return;
            }

            a /= div;
            ++ops;
        }
    }

    cout << ops << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    //freopen("input.txt", "r", stdin);

    cin >> t;
    while (t--)
        solve();

    return 0;
}
