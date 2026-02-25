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
    cin >> n >> x >> m;
    ll maxL = INT_MAX, maxR = 0, ans = 1;
    bool flag = false;
    for (ll i = 0; i < m; ++i)
    {
        ll l,r;
        cin >> l >> r;

        if (l <= x && x <= r)
            maxL = min(maxL, l), maxR = max(maxR, r), flag = true;

        if (flag)
        {
            if ((l <= maxL && maxL <= r) || (l <= maxR && maxR <= r))
                maxL = min(maxL, l), maxR = max(maxR, r), ans = max(ans, maxR - maxL + 1);
        }
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
