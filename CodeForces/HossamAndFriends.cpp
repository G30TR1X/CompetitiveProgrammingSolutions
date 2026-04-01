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

void solve()
{
    cin >> n >> m;
    vl nearest(n+1, 0);
    for (ll i = 0; i < m; ++i)
    {
        cin >> x >> y;
        if (x > y)
            swap(x,y);

        nearest[y] = max(nearest[y], x);
    }

    vl maxLeft(n+1, 0);
    maxLeft[1] = 1;
    ll ans = 1;
    for (ll i = 2; i <= n; ++i)
    {
        maxLeft[i] = max(maxLeft[i - 1], nearest[i] + 1);
        ans += i - maxLeft[i] + 1;
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
