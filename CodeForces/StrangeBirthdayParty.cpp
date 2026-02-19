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
ll t,n,m,x,y,z,u,v;
string s;

void solve()
{
    cin >> n >> m;
    vl k(n), c(m);
    for (ll i = 0; i < n; ++i)
        cin >> k[i];

    for (ll i = 0; i < m; ++i)
        cin >> c[i];

    sort(k.rbegin(), k.rend());

    ll present = 0, ans = 0;
    for (ll i = 0; i < n; ++i)
    {
        if (present < m && c[present] < c[k[i] - 1] && present <= k[i] - 1)
            ans += c[present], present++;
        else
            ans += c[k[i] - 1];
    }
    
    cout << ans << '\n';

    // Time Complexity: O(n log n)
    // Space Complexity: O(n + m)
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
