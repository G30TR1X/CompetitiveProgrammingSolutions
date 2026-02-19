#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define vl vector<ll>

const int MOD = 1e9 + 7;
const int MAX_ARRAY_SIZE = 1e6 + 1;
ll a[MAX_ARRAY_SIZE], b[MAX_ARRAY_SIZE];
string s;

void solve()
{
    ll n;
    cin >> n;
    ll sum = 0;
    if (n < 10)
    {
        for (ll i = 1; i <= n; ++i)
            sum += i;
        cout << sum << endl;
        return;
    }

    sum = 45;
    n -= 9;
    if (n % 20 == 0)
    {
        ll sequence = (n/20)+1;
        for (ll i = 1; i < sequence; ++i)
            sum += (i*10)+45;
        cout << sum << endl;
        return;
    }

    ll leftover = n % 20, sequence = (n/20)+1;
    ll half = leftover/2, otherHalf = leftover - half;
    for (ll i = 1; i < half; ++i)
        sum += i;

    sum += sequence*otherHalf;

    for (ll i = 1; i < sequence; ++i)
        sum += (i*10)+45;
    cout << sum << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    freopen("input.txt", "r", stdin);

    ll t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}
