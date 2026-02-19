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
    cin >> n >> k;
    for (ll i = 0; i < n; i++)
        cin >> a[i];

    vector<ll> sum(300000);
    ll index = 0;
    for (ll i = 0; i < n; ++i)
    {
        for (ll j = 0; j < n; ++j)
        {
            sum[index++] = a[i] + a[j];
        }
    }

    sort(sum.begin(), sum.begin() + (n*n));
    cout << sum[k-1] << endl;
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
