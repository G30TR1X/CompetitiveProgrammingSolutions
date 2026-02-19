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
vvl graph(MAX_ARRAY_SIZE);
vb vis(MAX_ARRAY_SIZE);

void solve()
{
    cin >> n;
    ll sumEven = 0, sumOdd = 0, even = 0, odd = 0, dandelions = 0, minOdd = INT_MAX;
    for (ll i = 0; i < n; ++i)
    {
        cin >> a[i];
        if (a[i] & 1)
            ++odd, sumOdd += a[i], minOdd = min(minOdd, a[i]);
        else
            ++even, sumEven += a[i];
    }

    if (odd >= 1)
    {
        dandelions += sumEven;
        dandelions += sumOdd;
        if (!(odd & 1))
            dandelions -= minOdd;
    }

    cout << dandelions << endl;
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
