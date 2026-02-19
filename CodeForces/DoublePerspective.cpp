#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long

const ll array_size = 1e6 + 1;
ll t, n, m, k, x, y, z, u, v;
ll a[array_size], b[array_size], c[array_size];
string s;

void solve()
{
    cin >> n;
    vector<pair<pair<int, int>, int>> pair(n + 1);
    for (ll i = 1; i <= n; ++i)
    {
        cin >> pair[i].first.first >> pair[i].first.second;
        pair[i].first.second = -pair[i].first.second;
        pair[i].second = i;
    }

    sort(pair.begin() + 1, pair.end());
    ll mn = -1e9;
    vector<int> ans;
    for (ll i = 1; i <= n; ++i)
    {
        if (pair[i].first.first > mn)
        {
            ans.push_back(pair[i].second);
            mn = pair[i].first.first;
        }
    }

    cout << ans.size() << endl;
    for (auto x : ans)
        cout << x << " ";
    cout << endl;
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
