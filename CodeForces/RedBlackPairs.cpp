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
ll a[MAX_ARRAY_SIZE], b[MAX_ARRAY_SIZE];

void solve()
{
    string c1, c2;
    cin >> n >> c1 >> c2;

    ll p1 = 0;
    for (ll i = 0; i < n; ++i)
    {
        if (c1[i] == c2[i])
            p1++;
    }

    ll p2 = 0;
    for (ll i = 0; i < n-1; ++i)
    {
        if (c1[i] == c1[i+1])
            p2++, ++i;
    }
    for (ll i = 0; i < n-1; ++i)
    {
        if (c2[i] == c2[i+1])
            p2++, ++i;
    }

    cout << min(n - p1, n - p2) << '\n';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    freopen("input.txt", "r", stdin);

    cin >> t;
    while (t--)
        solve();

    return 0;
}
