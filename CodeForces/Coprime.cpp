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
    cin >> n;
    for (ll i = 1; i <= n; ++i)
        cin >> a[i];

    vl map(1001, -1);
    for (ll i = 1; i <= n; ++i)
        map[a[i]] = i;

    ll ans = -1;
    for (ll i = 1; i <= 1000; ++i)
    {
        if (map[i] == -1)
            continue;

        for (ll j = 1; j <= 1000; ++j)
        {
            if (map[j] != -1 && __gcd(a[map[i]], a[map[j]]) == 1)
                ans = max(ans, map[i] + map[j]);
        }
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
