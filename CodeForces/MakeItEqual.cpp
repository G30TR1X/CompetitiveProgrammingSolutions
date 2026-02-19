#include <algorithm>
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
    
    multiset<ll> S, T, final;
    for (ll i = 0; i < n; ++i)
    {
        cin >> x;
        S.insert(x);
    }

    for (ll i = 0; i < n; ++i)
    {
        cin >> x;
        T.insert(x);
    }

    for (ll x : S)
    {
        if (T.find(x + k) != T.end())
        {
            final.insert(x+k);
            continue;
        }

        if (T.find(abs(x - k)) != T.end())
        {
            final.insert(abs(x-k));
            continue;
        }
    }

    if (final.size() == T.size())
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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
