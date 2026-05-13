#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;

#define ll long long
#define ull unsigned long long
#define vl vector<ll>
#define vs vector<string>
#define vc vector<char>
#define vb vector<bool>
#define vvl vector<vector<ll>>
#define vvb vector<vector<bool>>
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>

const int MOD = 1e9 + 7;
const int MAX_ARRAY_SIZE = 1e6 + 1;
ll t,n,m,k,x,y,z,u,v;
string s;

void solve()
{
    cin >> n;
    vl a(n);
    for (ll i = 0; i < n; ++i)
        cin >> a[i];

    ll small = 0;
    for (ll i = 1; i < n; ++i)
    {
        if (a[i-1] > a[i])
        {
            small = min(small, a[i] - a[i-1]);
            a[i] = a[i-1];
        }
    }

    ll ans = 0, cnt = 0;
    while (-small > cnt)
        ++ans, cnt += pow(2, ans-1);
    
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
