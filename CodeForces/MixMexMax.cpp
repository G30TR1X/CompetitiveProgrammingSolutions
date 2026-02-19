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
    unordered_map<ll, ll> counter;
    for (ll i = 0; i < n; ++i)
    {
        cin >> x;
        counter[x]++;
    }

    if (counter.size() >= 3)
    {
        cout << "NO" << endl;
        return;
    }

    if (counter.size() == 1 && counter[0] == 0)
    {
        cout << "YES" << endl;
        return;
    }

    if (counter.size() == 1 && counter[0] != 0)
    {
        cout << "NO" << endl;
        return;
    }

    if (counter[-1] == 0)
    {
        cout << "NO" << endl;
        return;
    }

    if (counter[0] != 0)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
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
