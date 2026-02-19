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
    ll mx = INT_MIN;
    cin >> n;
    for (ll i = 0; i < n; ++i)
    {
        cin >> a[i];
        mx = max(mx, a[i]);
    }

    sort(a,a+n);

    vector<int> b;
    vector<int> c;
    for (ll i = 0; i < n; ++i)
    {
        if (a[i] == mx)
            c.push_back(a[i]);
        else
            b.push_back(a[i]);
    }


    if (b.size() == 0 || c.size() == 0)
    {
        cout << -1 << endl;
        return;
    }

    cout << b.size() << " " << c.size() << endl;

    for (ll i = 0; i < b.size(); ++i)
        cout << b[i] << " ";
    cout << endl;

    for (ll i = 0; i < c.size(); ++i)
        cout << c[i] << " ";
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
