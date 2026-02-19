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
    for (ll i = 1; i <= n; ++i)
        cin >> a[i];
    for (ll i = 1; i <= n; ++i)
        cin >> b[i];

    ll l = 1, r = n, i = 1;
    for (; i <= n; ++i)
    {
        if (a[i] != b[i])
        {
            l = i;
            break;
        }
    }

    if (i == n+1)
        l = 1;

    for (ll i = n; i >= 1; --i)
    {
        if (a[i] != b[i])
        {
            r = i;
            break;
        }
    }

    if (r == 0)
        r = n;

    while (l > 1 && b[l] >= b[l-1])
        --l;

    while (r < n && b[r] <= b[r+1])
        ++r;
    
    cout << l << " " << r << endl;
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
