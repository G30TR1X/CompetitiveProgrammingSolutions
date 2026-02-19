#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long

const ll array_size = 1e6 + 1;
ll t,n,m,k,x,y,z,u,v;
ll a[array_size],b[array_size],c[array_size];
string s;

void solve()
{
    vector<ll> letters(26, 0);
    cin >> n >> k >> s;
    for (ll i = 0; i < n; ++i)
        ++letters[s[i] - 'a'];

    ll odd = 0;
    for (ll x : letters)
    {
        if (x % 2 == 1)
            ++odd;
    }

    odd -= k;
    if (odd > 1)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> t;
    while (t--)
        solve();

    return 0;
}
