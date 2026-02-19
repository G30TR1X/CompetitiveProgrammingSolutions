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
    cin >> n;
    priority_queue<ll, vector<ll>, greater<ll>> v1[n];
    ll sum = 0, smallest = INT_MAX, secondSmallest = INT_MAX;
    for (ll i = 0; i < n; ++i)
    {
        cin >> a[i];
        for (ll j = 0; j < a[i]; ++j)
        {
            cin >> x;
            v1[i].push(x);
        }

        smallest = min(smallest, v1[i].top());
        v1[i].pop();
        sum += v1[i].top();
        secondSmallest = min(secondSmallest, v1[i].top());
    }

    ll res = sum + smallest - secondSmallest;
    cout << res << endl;
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
