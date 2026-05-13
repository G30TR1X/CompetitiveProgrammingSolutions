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
    cin >> n >> k >> s;

    for (ll i = k; i < n; ++i)
    {
        if (s[i] == '1')
        {
            if (s[i % k] == '0')
            {
                cout << "NO\n";
                return;
            }
            s[i % k] = '1';
        }
        else if (s[i] == '0')
        {
            if (s[i % k] == '1')
            {
                cout << "NO\n";
                return;
            }
            s[i % k] = '0';
        }
    }

    ll z = 0, o = 0;
    for (ll i = 0; i < k; ++i)
    {
        if (s[i] == '0')
            ++z;
        else if (s[i] == '1')
            ++o;
    }

    cout << (z > k/2 || o > k/2 ? "NO\n" : "YES\n");
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
