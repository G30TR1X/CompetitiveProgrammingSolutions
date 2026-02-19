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
#define vvp vector<vector<pair<ll, ll>>>
#define vvb vector<vector<bool>>

const int MOD = 1e9 + 7;
const int MAX_ARRAY_SIZE = 1e6 + 1;
ll t,n,m,k,x,y,z,u,v,w,sum = 0;
string s;
vvp graph(MAX_ARRAY_SIZE);
vb vis(MAX_ARRAY_SIZE, false);
vl dist1(MAX_ARRAY_SIZE, INT_MAX);
vl dist2(MAX_ARRAY_SIZE, INT_MAX);

void dijsktra1(ll src)
{
    priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, greater<pair<ll, ll>>> q;
    q.push({0, src});
    while (!q.empty())
    {
        auto [distance, curr] = q.top();
        q.pop();

        if (distance > dist1[curr])
            continue;

        for (ll i = 0; i < graph[curr].size(); ++i)
        {
            auto [next, weight] = graph[curr][i];
            if (dist1[next] <= dist1[curr] + weight)
                continue;

            dist1[next] = dist1[curr] + weight;
            q.push({dist1[next], next});
        }
    }
}

void dijsktra2(ll src)
{
    priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, greater<pair<ll, ll>>> q;
    q.push({0, src});
    while (!q.empty())
    {
        auto [distance, curr] = q.top();
        q.pop();

        if (distance > dist2[curr])
            continue;

        for (ll i = 0; i < graph[curr].size(); ++i)
        {
            auto [next, weight] = graph[curr][i];
            if (dist2[next] <= dist2[curr] + weight)
                continue;

            dist2[next] = dist2[curr] + weight;
            q.push({dist2[next], next});
        }
    }
}

void solve()
{
    cin >> n >> m;
    for (ll i = 1; i <= m; ++i)
    {
        cin >> u >> v >> w;
        graph[u].push_back({v, w});
        graph[v].push_back({u, w});
    }

    dist1[1] = 0;
    vis[1] = true;
    dijsktra1(1);
    sum += dist1[2];

    dist2[2] = 0;
    dijsktra2(2);
    sum += dist2[3];

    cout << sum << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}
