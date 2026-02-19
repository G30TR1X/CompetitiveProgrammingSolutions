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
ll t,n,m,k,x,y,z,u,v;
ll a[MAX_ARRAY_SIZE], b[MAX_ARRAY_SIZE];
string s;
vvl graph(MAX_ARRAY_SIZE);
vb vis(MAX_ARRAY_SIZE);

void solve()
{
    cin >> n;
    for (ll i = 1; i <= n; ++i)
        cin >> a[i];

    ll zero = 0, one = 0, two = 0, three = 0, five = 0;
    for (ll i = 1; i <= n; ++i)
    {
        if (a[i] == 0)
            ++zero;
        else if (a[i] == 1)
            ++one;
        else if (a[i] == 2)
            ++two;
        else if (a[i] == 3)
            ++three;
        else if (a[i] == 5)
            ++five;

        if (zero >= 3 && one >= 1 && two >= 2 && three >= 1 && five >= 1)
        {
            cout << i << endl;
            return;
        }
    }

    cout << 0 << endl;
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
