#include <algorithm>
#include <bits/stdc++.h>
#include <pthread.h>
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
    ll ten = 0;
    for (ll i = 0; i < n; ++i)
    {
        cin >> a[i];
        if (a[i] & 1)
            a[i] += a[i] % 10;

        if (a[i] % 10 == 0)
            ++ten;
    }

    if (ten > 0 && ten != n)
    {
        cout << "NO\n";
        return;
    }

    if (ten == n)
    {
        ll checking = a[0];
        for (ll i = 1; i < n; ++i)
        {
            if (a[i] != checking)
            {
                cout << "NO\n";
                return;
            }
        }

        cout << "YES\n";
        return;
    }

    for (ll i = 0; i < n; ++i)
    {
        while (a[i] % 10 != 2)
            a[i] += a[i] % 10;

        a[i] = a[i] % 20;
    }

    ll checking = a[0];
    for (ll i = 1; i < n; ++i)
    {
        if (a[i] != checking)
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
