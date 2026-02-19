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
ll t,n,m,k,x,u,v;
ll a[MAX_ARRAY_SIZE], b[MAX_ARRAY_SIZE];
string s;

void solve()
{
    cin >> n;
    for (ll i = 0; i < n; ++i)
        cin >> a[i];

    ll z = n-1, y = n-2;
    if (a[z] < a[y])
    {
        cout << -1 << '\n';
        return;
    }

    if (a[z] < 0 && a[y] < 0)
    {
        for (ll i = 0; i < n-2; ++i)
        {
            if (a[i] > a[i+1])
            {
                cout << -1 << '\n';
                return;
            }
        }

        cout << 0 << '\n';
        return;
    }

    cout << n-2 << '\n';
    for (ll i = 0; i < n-2; ++i)
        cout << i+1 << ' ' << y+1 << ' ' << z+1 << '\n';
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
