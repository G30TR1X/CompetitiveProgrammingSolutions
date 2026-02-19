#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long

const ll array_size = 1e6 + 1;
ll t,n,m,k,x,y,z,u,v;
ll a[array_size],b[array_size],c[array_size];
string s;

bool checker(string x, string s)
{
    if (s.size() > x.size())
        return false;

    for (ll i = 0; i <= x.size() - s.size(); ++i)
    {
        if (x.substr(i,s.size()) == s)
            return true;
    }

    return false;
}

void solve()
{
    string z;
    cin >> n >> m >> z >> s;

    string z0 = z;
    string z1 = z0 + z0;
    string z2 = z1 + z1;
    string z3 = z2 + z2;
    string z4 = z3 + z3;
    string z5 = z4 + z4;

    ll ans = -1;
    if (checker(z0,s))
        ans = 0;
    else if (checker(z1,s))
        ans = 1;
    else if (checker(z2,s))
        ans = 2;
    else if (checker(z3,s))
        ans = 3;
    else if (checker(z4,s))
        ans = 4;
    else if (checker(z5,s))
        ans = 5;

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
