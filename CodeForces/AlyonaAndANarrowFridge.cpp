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
ll t,n,m,k,x,y,z,u,v,h;
ll a[MAX_ARRAY_SIZE], b[MAX_ARRAY_SIZE];
string s;

bool check(ll x)
{
    vl v(x);
    for (ll i = 0; i < x; ++i)
        v[i] = a[i];

    sort(v.rbegin(), v.rend());
    ll currHeight = 0;
    for (ll i = 0; i < x; i += 2)
    {
        if (i + 1 == x)
            return currHeight + v[i] <= h;

        currHeight += max(v[i], v[i+1]);
        if (currHeight > h)
            return false;
    }

    return true;
}

void solve()
{
    cin >> n >> h;
    for (ll i = 0; i < n; ++i)
        cin >> a[i];

    ll l = 1, r = n, ans = 1;
    while (l <= r)
    {
        ll mid = l + (r - l) / 2;
        if (check(mid))
            ans = mid, l = mid + 1;
        else
            r = mid - 1;
    }

    cout << ans << '\n';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}
