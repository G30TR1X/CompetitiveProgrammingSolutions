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
    cin >> n >> m >> x >> y >> u >> v;
    set<pair<ll,ll>> seen;
    vector<pair<ll,ll>> pair = {{n,m}, {n,-m}, {-n,m}, {-n,-m}, {m,n}, {-m,n}, {m,-n}, {-m,-n}};

    ll hit = 0;
    for (ll i = 0; i < 8; ++i)
    {
        for (ll j = 0; j < 8; ++j)
        {
            ll kingX = x + pair[i].first;
            ll kingY = y + pair[i].second;
            ll queenX = u + pair[j].first;
            ll queenY = v + pair[j].second;

            if (kingX == queenX && kingY == queenY && seen.find({kingX,kingY}) == seen.end())
            {
                ++hit;
                seen.insert({kingX,kingY});
            }
        }
    }

    cout << hit << endl;
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
