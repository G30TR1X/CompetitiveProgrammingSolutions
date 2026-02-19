#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long

void solve()
{
    ll n,q, sum = 0;
    cin >> n >> q;
    ll tree[n+1][3];
    for (ll i = 1; i <= n; i++)
        tree[i][0] = tree[i][1] = tree[i][2] = -1;

    for (ll i = 1; i <= n; i++)
        cin >> tree[i][0];

    for (ll i = 1; i <= n-1; i++)
    {
        ll u,v,c;
        cin >> u >> v >> c;
        tree[u][1] = v;
        tree[u][2] = c;

        if (tree[u][0] != tree[v][0])
            sum += c;
    }

    for (ll i = 1; i <= q; i++)
    {
        ll v,x;
        cin >> v >> x;
        tree[v][0] = x;
        cout << sum << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}
