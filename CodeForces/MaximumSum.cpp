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
    cin >> n >> k;
    vl a(n);
    for (ll i = 0; i < n; ++i)
        cin >> a[i];

    sort(a.begin(), a.end());

    vl pre(n);
    pre[0] = a[0];
    for (ll i = 1; i < n; ++i)
        pre[i] = pre[i-1] + a[i];

    ll ans = 0;
    for (ll first = 0; first <= k; ++first)
    {
        ll second = k - first;
        ll left = 2 * first;
        ll right = n - second - 1;
        ll sum = pre[right] - (left == 0 ? 0 : pre[left-1]);
        ans = max(ans, sum);
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
