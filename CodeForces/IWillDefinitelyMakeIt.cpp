#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long

void solve()
{
    ll n,k;
    cin >> n >> k;
    ll h[n+1];
    for (ll i = 1; i <= n; i++)
        cin >> h[i];

    ll start = 1, time = 0, cur = h[k];
    sort(h+1, h+n+1);
    for (; start <= n; start++)
    {
        if (h[start] > cur)
            break;
    }

    bool survive = true;
    for (ll i = start; i <= n; i++)
    {
        time += h[i] - cur;
        if (time > cur)
        {
            survive = false;
            break;
        }
        else
            cur = h[i];
    }

    if (survive)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
