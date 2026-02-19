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
    cin >> n >> x;
    for (ll i = 0; i < n; ++i)
        cin >> a[i];

    sort(a, a+n);
    vl prefix(n);
    prefix[0] = a[0];
    for (ll i = 1; i < n; ++i)
        prefix[i] = prefix[i-1] + a[i];

    ll ans = 0, extra = 0;
    for (ll i = 0; i < n; ++i)
    {
        ll l = 0, r = INT_MAX, maximum = 0;
        while (l <= r)
        {
            ll mid = l + (r-l)/2;
            if (prefix[i] + ((i+1) * (mid-1)) <= x)
                l = mid+1, maximum = mid;
            else
                r = mid-1;
        }
        ans += maximum;
    }

    cout << ans << '\n';
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
