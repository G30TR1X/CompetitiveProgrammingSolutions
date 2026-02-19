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
    vector<ll> p(n);
    
    for (ll i = 0; i < n ; ++i)
        cin >> p[i];

    ll inversions = 0;
    for (ll i = 1; i <= n; ++i)
    {
        ll pos = 0;
        while (p[pos] != i) ++pos;

        ll rightInverse = (p.size() - pos - 1);
        inversions += min( pos, rightInverse);
        p.erase(p.begin() + pos);
    }
    
    cout << inversions << endl;
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
