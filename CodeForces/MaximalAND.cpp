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
ll a[MAX_ARRAY_SIZE], b[MAX_ARRAY_SIZE];
string s;

void getBits(vl &bits, ll num)
{
    for (ll i = 0; i <= 30; ++i)
    {
        if (num & (1 << i))
            ++bits[i];
    }
}

void solve()
{
    cin >> n >> k;
    vl bits(31,0);
    for (ll i = 0; i < n; ++i)
    {
        cin >> a[i];
        getBits(bits, a[i]);
    }

    ll ans = 0;
    for (ll i = 30; i >= 0; --i)
    {
        if (n - bits[i] <= k)
            ans += (1 << i), k -= (n - bits[i]);
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
