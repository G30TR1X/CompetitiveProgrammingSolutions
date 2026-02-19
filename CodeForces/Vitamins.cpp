#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long

const int MOD = 1e9 + 7;
const ll array_size = 1e6 + 1;
ll t,n,m,k,x,y,z,u,v;
ll a[array_size];
string s;

void solve()
{
    cin >> n;

    ll vitamins[n+1][8];
    for (ll i = 0; i <= n; ++i)
    {
        for (ll j = 0; j < 8; ++j)
            vitamins[i][j] = INT_MAX;
    }

    vitamins[0][0] = 0;
    for (ll i = 0; i < n; ++i)
    {
        ll cost;
        cin >> cost >> s;

        ll stringMask = 0;
        for (ll j = 0; j < 3; ++j)
        {
            char vit = 'C' - j;
            bool have = false;
            for (char v : s)
                if (v == vit)
                    have = true;

            if (have)
                stringMask += (1 << j);
        }

        for (ll mask = 0; mask < 8; ++mask)
        {
            vitamins[i+1][mask] = min(vitamins[i+1][mask], vitamins[i][mask]);
            vitamins[i+1][mask | stringMask] = min(vitamins[i+1][mask | stringMask], vitamins[i][mask] + cost);
        }
    }

    if (vitamins[n][7] == INT_MAX)
        cout << -1 << endl;
    else
        cout << vitamins[n][7] << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}
