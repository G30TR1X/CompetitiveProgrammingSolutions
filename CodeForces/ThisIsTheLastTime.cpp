#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k, ignore = 0;
        cin >> n >> k;
        pair<ll, pair<ll, ll>> casino[n+1];
        for (int i = 1; i <= n; i++)
            cin >> casino[i].first >> casino[i].second.first >> casino[i].second.second;

        sort(casino + 1, casino + n + 1);
        ll cur = k;
        for (int i = 1; i <= n; i++)
        {
            if (casino[i].first > cur)
                break;

            cur = max(cur, casino[i].second.second);
        }

        cout << cur << endl;
    }
}
