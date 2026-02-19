#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define vl vector<ll>

const int MOD = 1e9 + 7;
const int MAX_ARRAY_SIZE = 1e6 + 1;
ll t,n,m,k,x,y,z,u,v;
ll a[MAX_ARRAY_SIZE], b[MAX_ARRAY_SIZE];
string s;

void solve()
{
    cin >> n;
    ll highest = INT_MIN, smallest = INT_MAX;
    for (ll i = 0; i < n; ++i)
    {
        cin >> a[i];
        highest = max(highest, a[i]);
        smallest = min(smallest, a[i]);
    }

    ll highCount = 0, smallCount = 0;
    for (ll i = 0; i < n; ++i)
    {
        if (a[i] == highest)
            ++highCount;

        if (a[i] == smallest)
            ++smallCount;
    }

    if (highest == smallest)
    {
        ll increment = 4, ans = 2;
        for (ll i = 2; i < highCount; ++i)
        {
            ans += increment;
            increment += 2;
        }

        cout << ans << endl;
        return;
    }

    cout << (2*highCount*smallCount) << endl;
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
