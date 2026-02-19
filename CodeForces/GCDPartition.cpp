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

    vl prefix(n), suffix(n);
    prefix[0] = a[0];
    suffix[n-1] = a[n-1];
    for (ll i = 1; i < n; ++i)
    {
        prefix[i] = prefix[i-1] + a[i];
        suffix[n-i-1] = suffix[n-i] + a[n-i-1];
    }

    ll ans = 0;
    for (ll i = 0; i < n-1; ++i)
        ans = max(ans, __gcd(prefix[i], suffix[i+1]));

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
