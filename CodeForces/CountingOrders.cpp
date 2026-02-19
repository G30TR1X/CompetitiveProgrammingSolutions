#include <algorithm>
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
    cin >> n;
    vl a(n), b(n);
    for (ll i = 0; i < n; ++i)
        cin >> a[i];
    for (ll i = 0; i < n; ++i)
        cin >> b[i];

    sort(a.begin(), a.end());
    sort(b.rbegin(), b.rend());

    ll ans = 1;
    for (ll i = 0; i < n; ++i)
    {
        ll temp = upper_bound(a.begin(), a.end(), b[i]) - a.begin();
        ll count = a.size() - temp;

        ans = ans * max(count - i, 0ll) % MOD;
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
