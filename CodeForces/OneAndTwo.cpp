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
    ll two = 0;
    for (ll i = 0; i < n; ++i)
    {
        cin >> a[i];
        if (a[i] == 2)
            two++;
    }

    if (two % 2 == 1)
    {
        cout << -1 << endl;
        return;
    }

    ll index = 0, ans = 1;
    for (ll i = 0; i < n && index < two/2; ++i)
    {
        if (a[i] == 2)
        {
            index++;
            ans = i+1;
        }
    }

    cout << ans << endl;
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
