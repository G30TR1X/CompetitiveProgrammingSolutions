#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define vl vector<ll>

const int MOD = 1e9 + 7;
const int MAX_ARRAY_SIZE = 1e6 + 1;
ll n, t;

ll mulMod(ll a, ll b)
{
    return ((a % MOD) * (b % MOD)) % MOD;
}

void solve()
{
    ll factorial[10000];
    factorial[0] = 1;
    for (ll i = 1; i < 10000; i++)
        factorial[i] = (factorial[i - 1] * i) % MOD;

    ll n, a, b;
    cin >> n >> a >> b;
    ll sum = 0;
    for (ll i = a; i <= b; ++i)
    {
        ll top = factorial[n];
        ll bottom1 = factorial[n-i];
        ll bottom2 = factorial[i];
        ll bottom = mulMod(bottom1, bottom2);
        ll comb = (top/(bottom1 * bottom2)) % MOD;
        sum += comb;
    }

    cout << sum << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // freopen("input.txt", "r", stdin);

    solve();

    return 0;
}
