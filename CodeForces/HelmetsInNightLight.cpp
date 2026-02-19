#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long

const int MOD = 1e9 + 7;
const ll array_size = 1e6 + 1;
ll t,n,m,k,x,y,z,u,v;
ll a[array_size], b[array_size];
string s;

void solve()
{
    cin >> n >> k;
    for (ll i = 0; i < n; ++i)
        cin >> a[i];

    vector<pair<ll,ll>> residents;
    for (ll i = 0; i < n; ++i)
    {
        cin >> x;
        residents.push_back({x, a[i]});
    }

    sort(residents.begin(), residents.end());
    ll sum = k, share = 1;
    for (auto [cost, people] : residents)
    {
        if (cost >= k || share >= n)
            break;

        for (ll i = 0; i < people && share < n; ++i)
        {
            sum += cost;
            share++;
        }
    }
    
    sum += (n-share)*k;
    cout << sum << endl;
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
