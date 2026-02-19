#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long

const int MOD = 1e9 + 7;
const ll array_size = 1e6 + 1;
ll t,n,m,k,x,y,z,u,v;
ll a[array_size];
string s;


bool valid(ll length, ll k)
{
    if (length == 0)
        return false;

    ll cuts = 0;
    for (ll i = 0; i < n; ++i)
    {
        if (a[i] <= length)
            continue;

        cuts += a[i] / length;
    }

    return cuts <= k;
}

void solve()
{
    // freopen("input.txt", "r", stdin);
    
    cin >> n >> k;
    for (ll i = 0; i < n; ++i)
        cin >> a[i];

    ll l = 0, r = 1e9+1;
    while (l < r)
    {
        ll length = l + (r - l) / 2;

        if (valid(length, k))
            r = length;
        else
            l = length + 1;
    }

    cout << l << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}
