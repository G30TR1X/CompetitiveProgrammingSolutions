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
    ll maxHeight = INT_MIN, minHeight = INT_MAX, maxI = -1, minI = -1;
    for (ll i = 0; i < n; ++i)
    {
        cin >> a[i];
        maxHeight = max(maxHeight, a[i]);
        minHeight = min(minHeight, a[i]);
    }

    for (ll i = 0; i < n; ++i)
    {
        if (maxI == -1 && a[i] == maxHeight)
            maxI = i;

        if (a[i] == minHeight)
            minI = i;
    }

    if (maxI > minI)
        ++minI;

    cout << maxI + ((n-1) - minI) << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}
