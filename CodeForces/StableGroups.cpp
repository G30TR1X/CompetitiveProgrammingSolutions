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
    cin >> n >> k >> x;
    for (ll i = 0; i < n; ++i)
        cin >> a[i];

    sort(a, a+n);

    vl gap;
    for (ll i = 1; i < n; ++i)
    {
        if (a[i] - a[i-1] > x)
            gap.push_back(a[i] - a[i-1]);
    }

    sort(gap.begin(), gap.end());
    ll nGap = gap.size(), ans = nGap + 1;
    for (ll i = 0; i < nGap; ++i)
    {
        ll val = gap[i] / x + (gap[i] % x != 0) - 1;
        if (val <= k)
            k -= val, --ans;
        else
            break;
    }

    cout << ans << '\n';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    //freopen("input.txt", "r", stdin);

    solve();

    return 0;
}
