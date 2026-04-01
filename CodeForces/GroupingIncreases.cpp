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

void solve()
{
    cin >> n;
    for (ll i = 0; i < n; ++i)
        cin >> a[i];

    ll ans = 0;
    for (ll i = 0; i < n-1; ++i)
        if (a[i] < a[i+1])
            ans++;

    ll l = 0, r = 0, p = 0;
    for (ll i = 0; i < n; ++i)
    {
        if (a[i] <= l && a[i] <= r)
        {
            if (l < r)
                l = a[i];
            else
                r = a[i];
        }
        else if (a[i] <= l)
        {
            l = a[i];
        }
        else if (a[i] <= r)
        {
            r = a[i];
        }
        else
        {
            if (l == 0)
            {
                l = a[i];
                continue;
            }

            if (r == 0)
            {
                r = a[i];
                continue;
            }

            if (l < r)
                l = a[i];
            else
                r = a[i];

            ++p;
        }
    }

    cout << min(ans, p) << '\n';
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
