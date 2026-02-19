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
    cin >> n;
    ll total_cell = 0;
    ll total_consecutive_cell = 0;
    ll max_consecutive_cell = 0;

    for (ll i = 0; i < n; ++i)
    {
        char c;
        cin >> c;

        total_cell += c == '.' ? 1 : 0;
        total_consecutive_cell = c == '.' ? total_consecutive_cell+1 : 0;
        max_consecutive_cell = max(max_consecutive_cell, total_consecutive_cell);
    }

    if (max_consecutive_cell >= 3)
        cout << 2 << endl;
    else
        cout << total_cell << endl;
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
