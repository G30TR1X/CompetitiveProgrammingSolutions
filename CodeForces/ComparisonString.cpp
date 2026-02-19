#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long

const int MOD = 1e9 + 7;
const ll array_size = 1e6 + 1;
ll t,n,m,k,x,y,z,u,v;
ll a[array_size],b[array_size],c[array_size];
string s;

void solve()
{
    cin >> n >> s;
    ll longest = 1, currLongest = 1;
    for (ll i = 1; i < n; ++i)
    {
        if (s[i] == s[i-1])
            currLongest++;
        else
            currLongest = 1;

        longest = max(longest, currLongest);
    }

    cout << longest + 1 << endl;
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
