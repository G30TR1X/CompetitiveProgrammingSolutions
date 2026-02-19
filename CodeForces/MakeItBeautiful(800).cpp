#include <bits/stdc++.h>
#include <ostream>
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
    vector<ll> arr(n);
    for (ll i = 0; i < n; i++)
        cin >> arr[i];

    if (arr[0] == arr[n-1])
        cout << "NO" << endl;
    else
    {
        cout << "YES" << endl;
        cout << arr[n-1] << " ";
        for (ll i = 0; i < n-1; ++i)
            cout << arr[i] << " ";
        cout << endl;
    }
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
