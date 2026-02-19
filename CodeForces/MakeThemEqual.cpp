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
const int MAX_ARRAY_SIZE = 4e5 + 1;
ll t,n,m,k,x,y,z,u,v;
string s;

void solve()
{
    char c;
    cin >> n >> c >> s;

    ll count = 0;
    for (ll i = 0; i < n; ++i)
        count += s[i] == c;

    if (count == n)
    {
        cout << 0 << '\n';
        return;
    }

    for (ll i = 1; i < n; ++i)
    {
        if (s[i] == c)
        {
            bool flag = true;
            for (ll j = i; j < n; j += i+1)
            {
                if (s[j] != c)
                {
                    flag = false;
                    break;
                }
            }

            if (flag)
            {
                cout << 1 << '\n' << i+1 << '\n';
                return;
            }
        }
    }

    cout << 2 << '\n' << n << ' ' << n-1 << '\n';
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
