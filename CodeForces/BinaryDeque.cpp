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
    cin >> n >> m;
    ll sum = 0;
    for (ll i = 0; i < n; ++i)
    {
        cin >> a[i];
        sum += a[i];
    }

    if (sum < m)
    {
        cout << -1 << '\n';
        return;
    }
    else if (sum == m)
    {
        cout << 0 << '\n';
        return;
    }

    ll curr = 0, ans = INT_MAX;
    for (ll l = 0, r = 0; r < n;)
    {
        while (r < n && (curr != m || a[r] == 0))
            curr += a[r++];

        ans = min(ans, n - (r - l));

        while (l < r && l < n && curr == m)
            curr -= a[l++];
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
