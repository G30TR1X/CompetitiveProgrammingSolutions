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
const int MAX_ARRAY_SIZE = 1e7 + 1;
ll t, n, m, k, x, y, z, u, v;
string s;
vector<ll> primeCheck(MAX_ARRAY_SIZE, 1), prime;

void sieve()
{
    primeCheck[0] = primeCheck[1] = 0;
    for (ll i = 2; i < MAX_ARRAY_SIZE; i++)
    {
        if (primeCheck[i])
        {
            for (ll j = i * 2; j < MAX_ARRAY_SIZE; j += i)
                primeCheck[j] = 0;

            prime.push_back(i);
        }
    }
}

void solve()
{
    cin >> n;
    ll ans, divisor, curr;
    ans = divisor = curr = 1;
    for (ll p : prime)
    {
        if (abs(p - curr) >= n)
            ans *= p, curr = p, ++divisor;

        if (divisor == 3)
            break;
    }

    cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    sieve();

    // freopen("input.txt", "r", stdin);

    cin >> t;
    while (t--)
        solve();

    return 0;
}
