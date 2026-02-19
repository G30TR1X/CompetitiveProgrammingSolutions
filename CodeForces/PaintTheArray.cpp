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

    ll gcdE = 0, gcdO = 0;
    for (ll i = 1; i <= n; i += 2)
        gcdO = __gcd(gcdO, a[i]);

    for (ll i = 2; i <= n; i += 2)
        gcdE = __gcd(gcdE, a[i]);

    bool canE = true, canO = true;
    for (ll i = 1; i <= n; ++i)
    {
        if ((i & 1) && (a[i] % gcdE == 0))
            canE = false;

        if (!(i & 1) && (a[i] % gcdO == 0))
            canO = false;
    }

    if (canE || canO)
        cout << ((canE) ? gcdE : gcdO) << endl;
    else
        cout << 0 << endl;
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
