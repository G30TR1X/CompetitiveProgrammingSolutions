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
    for (int i = 0; i < n; ++i)
        cin >> a[i];

    vector<int> origin;
    origin.push_back(a[0]);
    for (ll i = 1; i < n; ++i)
    {
        if (a[i-1] > a[i])
            origin.push_back(a[i]);
        
        origin.push_back(a[i]);
    }

    cout << origin.size() << endl;
    for (ll x : origin)
        cout << x << " ";

    cout << endl;
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
