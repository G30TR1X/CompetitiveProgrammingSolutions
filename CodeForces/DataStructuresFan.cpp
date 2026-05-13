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
string s;

void solve()
{
    ll q;
    cin >> n;
    for (ll i = 0; i < n; ++i)
        cin >> a[i];
    cin >> s >> q;

    ll zero = 0, one = 0;
    vl prefix(n+1, 0);
    for (ll i = 0; i < n; ++i)
    {
        if (i >= 1)
            prefix[i] = prefix[i-1] ^ a[i-1];

        if (s[i] == '0')
            zero ^= a[i];
        else
            one ^= a[i];
    }

    prefix[n] = prefix[n-1] ^ a[n-1];
    while (q--)
    {
        ll c,l,r,g;
        cin >> c;
        if (c == 1)
        {
            cin >> l >> r;
            zero ^= prefix[r] ^ prefix[l-1];
            one ^= prefix[r] ^ prefix[l-1];
        }
        else
        {
            cin >> g;
            cout << ((g == 0) ? zero : one) << ' ';
        }
    }
    cout << '\n';
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
