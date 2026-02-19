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
    cin >> n >> x;
    ll sum = 0;
    unordered_map<int, int> counter;
    for (ll i = 1; i <= n; ++i)
    {
        cin >> a[i];
        counter[a[i]]++;
        sum += a[i];
    }

    if (sum > x)
    {
        for (ll i = 1; i <= n; ++i)
            cout << a[i] << " ";
        cout << endl;
        return;
    }

    ll rest = x - sum;
    if (rest == 1)
    {
        for (ll i = counter[1]; i > 0; --i)
            cout << 1 << " ";

        for (ll i = counter[2]; i > 0; --i)
            cout << 2 << " ";

        for (ll i = counter[0]; i > 0; --i)
            cout << 0 << " ";

        cout << endl;
        return;
    }
    else
        cout << -1 << endl;
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
