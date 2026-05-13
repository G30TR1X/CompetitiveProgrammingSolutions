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

ll lcm(ll a, ll b)
{
    return (a * b) / __gcd(a, b);
}

void solve()
{
    ll q;
    cin >> n >> s >> q;
    ll positive = 0, negative = 0;
    for (ll i = 0; i < n; ++i)
    {
        if (s[i] == '+')
            positive++;
        else
            negative++;
    }

    for (ll i = 0; i < q; ++i)
    {
        cin >> x >> y;
        if (positive == negative)
        {
            cout << "YES\n";
            continue;
        }

        if (positive == 0 || negative == 0 || x == y)
        {
            cout << "NO\n";
            continue;
        }
        
        ll common = lcm(x, y);
        ll xTime = common / x;
        ll yTime = common / y;
        ll imbalance = abs(yTime - xTime);
        ll blockSize = xTime + yTime;
        ll req1 = abs(positive - negative) % imbalance;
        ll req2 = abs(positive - negative) / imbalance;

        cout << (((req1 == 0) && ((blockSize * req2) <= n)) ? "YES\n" : "NO\n");
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}
