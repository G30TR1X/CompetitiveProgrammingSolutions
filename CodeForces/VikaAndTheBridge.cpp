#include <bits/stdc++.h>
#include <queue>
using namespace std;

#define ll long long
#define ull unsigned long long
#define vl vector<ll>
#define vs vector<string>
#define vc vector<char>
#define vb vector<bool>
#define vvl vector<vector<ll>>
#define vvb vector<vector<bool>>

const int MOD = 1e9 + 7;
const int MAX_ARRAY_SIZE = 1e6 + 1;
ll t,n,m,k,x,y,z,u,v;
ll a[MAX_ARRAY_SIZE], b[MAX_ARRAY_SIZE];
string s;

void solve()
{
    cin >> n >> k;
    for (ll i = 0; i < n; ++i)
        cin >> a[i];
            
    vvl color(k+1);
    for (ll i = 1; i <= k; ++i)
        color[i].push_back(0);

    for (ll i = 0; i < n; ++i)
    {
        color[a[i]].push_back(i+1);
    }

    for (ll i = 1; i <= k; ++i)
        color[i].push_back(n+1);

    ll ans = INT_MAX;
    priority_queue<ll> dist[k+1];
    for (ll i = 1; i <= k; ++i)
    {
        for (ll j = 0; j < color[i].size() - 1; ++j)
            dist[i].push(color[i][j+1] - color[i][j]-1);

        ll highDist = dist[i].top();
        dist[i].pop();

        dist[i].push(highDist / 2);
        if(highDist % 2 == 0)
            dist[i].push(highDist / 2 - 1);
        else
            dist[i].push(highDist / 2);

        ans = min(ans, dist[i].top());
    }
    cout << ans << '\n';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    //freopen("input.txt", "r", stdin);

    cin >> t;
    while (t--)
        solve();

    return 0;
}
