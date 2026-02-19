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

void solve()
{
    cin >> n >> x;
    vl bits(20,0);
    for (ll i = 0; i < n; ++i)
    {
        cin >> a[i];
        ll sub = a[i], bit = 0;
        while (sub != 1)
            ++bit, sub >>= 1;

        bits[bit]++;
    }

    ll ans = 0, used = 0;
    while (n != used)
    {
        ll W = x;
        for (ll i = 19; i >= 0; --i)
        {
            ll num = 1ll << i;
            while (bits[i] > 0 && W >= num)
            {
                W -= num;
                bits[i]--;
                ++used;
            }
        }

        ++ans;
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
