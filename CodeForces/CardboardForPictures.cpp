#include <bits/stdc++.h>
#include <climits>
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
ull t, n, m, k, x, y, z, u, v, c;
ull a[MAX_ARRAY_SIZE];
string s;

bool check(ull w)
{
    ull sum = 0;
    for (ll i = 0; i < n; ++i)
    {
        sum += (a[i]+2*w) * (a[i]+2*w);
        if (sum > c)
            break;
    }
    return sum <= c;
}

void solve()
{
    cin >> n >> c;
    for (ull i = 0; i < n; ++i)
        cin >> a[i];

    ull l = 1, r = 1e9, ans = 1;
    while (l <= r)
    {
        ull mid = l + (r - l) / 2;
        if (check(mid))
            ans = mid, l = mid + 1;
        else
            r = mid - 1;
    }

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
