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
    cin >> n;
    for (ll i = 0; i < n; ++i)
        cin >> a[i];

    ll sum = 0;
    for (ll i = 0; i < n; ++i)
        sum ^= a[i];

    if (sum == 0)
    {
        cout << "YES\n";
        return;
    }

    ll pre = 0, preIdx = -1, suf = 0, sufIdx = -1;
    for (ll i = 0; i < n; ++i)
    {
        pre ^= a[i];
        if (pre == sum)
        {
            preIdx = i;
            break;
        }
    }

    for (ll i = n-1; i >= 0; --i)
    {
        suf ^= a[i];
        if (suf == sum)
        {
            sufIdx = i;
            break;
        }
    }

    cout << (sufIdx > preIdx ? "YES\n" : "NO\n");
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
