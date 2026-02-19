#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define vl vector<ll>

const int MOD = 1e9 + 7;
const int MAX_ARRAY_SIZE = 1e6 + 1;

void solve()
{
    ll prime[MAX_ARRAY_SIZE];
    memset(prime, 1, sizeof(prime));

    prime[0] = 0;
    prime[1] = 1;
    for (int i = 2; i < MAX_ARRAY_SIZE; i++)
    {
        if (prime[i])
        {
            for (int j = 2*i; j < MAX_ARRAY_SIZE; j += i)
                prime[j] = 0;
        }
    }

    ll n;
    while (cin >> n, n != 0)
    {
        if (n > 0)
            cout << n << " = ";
        else
            cout << n << " = -1 x ";

        n = abs(n);
        for (ll i = 2; i <= n && n != 1; i++)
        {
            if (prime[i] && n % i == 0)
            {
                while (n != 1 && n % i == 0)
                {
                    n /= i;
                    cout << i;
                    if (n != 1)
                        cout << " x ";
                }
            }
        }

        cout << endl;
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
