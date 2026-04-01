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
string s;

bool check(ll mid, vl &a)
{
    ll sum = 0;
    for (ll i = 0; i < n; ++i)
        sum += min(mid, a[i] + ((mid - a[i]) / 2));

    return sum >= m;
}

void solve()
{
    cin >> n >> m;
    vl a(n, 0);
    for (ll i = 0; i < m; ++i)
    {
        cin >> x;
        a[x-1]++;
    }

    ll ans = 1;
    ll l = 0, r = m*2;
    while (l <= r)
    {
        ll mid = l + (r - l) / 2;
        if (check(mid, a))
            ans = mid, r = mid - 1;
        else
            l = mid + 1;
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
