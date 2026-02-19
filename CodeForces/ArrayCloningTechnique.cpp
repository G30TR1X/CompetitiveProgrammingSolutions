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
    unordered_map<ll, ll> counter;
    ll maxN = 0;
    for (ll i = 0; i < n; ++i)
    {
        cin >> x;
        counter[x]++;
        maxN = max(maxN, counter[x]);
    }

    ll swaps = n - maxN;
    while (n - maxN > 0)
    {
        swaps++;
        maxN += maxN;
    }

    cout << swaps << endl;
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
