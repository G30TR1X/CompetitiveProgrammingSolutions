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

bool check(ll mod)
{
    unordered_set<ll> seen;
    for (ll i = 0; i < n; ++i)
    {
        seen.insert(a[i] % mod);
        if (seen.size() > 2)
            return false;
    }

    return seen.size() == 2;
}

void solve()
{
    ll odd = 0, maximum = 0;
    cin >> n;
    for (ll i = 0; i < n; ++i)
    {
        cin >> a[i];
        maximum = max(maximum, a[i]);
        if (a[i] & 1)
            ++odd;
    }

    if (odd != 0 && odd != n)
    {
        cout << 2 << '\n';
        return;
    }

    ll i;
    if (odd == 0)
        i = 4;
    else
        i = 3;

    for (; i <= maximum; i += 2)
    {
        if (check(i))
        {
            cout << i << '\n';
            return;
        }
    }
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
