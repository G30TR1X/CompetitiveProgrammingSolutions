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

const int MOD = 1000003;
const int MAX_ARRAY_SIZE = 1e6 + 1;
ll t,n,m,k,x,y,z,u,v;
ll a[MAX_ARRAY_SIZE], b[MAX_ARRAY_SIZE];
string s;

void solve()
{
    cin >> n;

    for (ll i = 0; i < n; ++i)
        cin >> a[i];

    map<ll,ll> primeFactors;
    for (ll i = 0; i < n; ++i)
    {
        for (ll j = 2; j*j <= a[i]; ++j)
        {
            while (a[i] % j == 0)
            {
                primeFactors[j]++;
                a[i] /= j;
            }
        }

        if (a[i] > 1)
            primeFactors[a[i]]++;
    }

    for (auto [x,y] : primeFactors)
    {
        if (y % n != 0)
        {
            cout << "NO\n";
            return;
        }
    }

    cout << "YES\n";
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
