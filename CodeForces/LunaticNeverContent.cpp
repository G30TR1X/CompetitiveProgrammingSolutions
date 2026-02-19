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

bool check()
{
    for (ll i = 0; i < n/2; ++i)
    {
        if (a[i] != a[n-i-1])
            return false;
    }
    return true;
}

void solve()
{
    cin >> n;
    for (ll i = 0; i < n; ++i)
        cin >> a[i];

    if (check())
    {
        cout << 0 << endl;
        return;
    }

    ll ans = abs(a[0] - a[n-1]);
    for (ll i = 1; i < n/2; ++i)
        ans = __gcd(ans, abs(a[i] - a[n-i-1]));
    
    cout << ans << endl;
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
