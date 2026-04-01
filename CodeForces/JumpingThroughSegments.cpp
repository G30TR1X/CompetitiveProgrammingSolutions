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
ll l[MAX_ARRAY_SIZE], r[MAX_ARRAY_SIZE];
string s;

bool check(ll steps)
{
    if (steps < l[0])
        return false;

    ll currMin, currMax, reachableStart, reachableEnd;
    currMin = currMax = 0;
    for (ll i = 0; i < n; ++i)
    {
        currMin -= steps;
        currMax += steps;

        reachableStart = max(currMin, l[i]);
        reachableEnd = min(currMax, r[i]);

        if (reachableStart > reachableEnd)
            return false;

        currMin = reachableStart;
        currMax = reachableEnd;
    }

    return true;
}

void solve()
{
    cin >> n;
    for (ll i = 0; i < n; ++i)
        cin >> l[i] >> r[i];

    ll ans = 0, curr = 0, l = 0, r = INT_MAX;
    while (l <= r)
    {
        ll mid = l + (r - l) / 2;
        if (check(mid))
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
