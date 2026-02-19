#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long

const ll array_size = 1e6 + 1;
ll t,n,m,k,x,y,z,u,v;
ll a[array_size],b[array_size],c[array_size];
string s;

vector<ll> edges[500005];
bool visited[500005];
ll news[500005];

void solve()
{
    cin >> n >> m;
    for (ll i = 1; i <= m; i++)
    {
        cin >> k;
        vector<ll> v(k+1);
        for (ll j = 1; j <= k; j++)
            cin >> v[j];

        for (ll j = 1; j+1 <=k; j++)
        {
            edges[v[j]].push_back(v[j+1]);
            edges[v[j+1]].push_back(v[j]);
        }
    }

    memset(visited, false, sizeof(visited));

    for (ll i = 1; i <= n; i++)
    {
        if (!visited[i])
        {
            vector<ll> component;
            queue<ll> q;
            q.push(i);
            while (!q.empty())
            {
                ll curr = q.front();
                q.pop();

                if (visited[curr]) 
                    continue;
                visited[curr] = true;
                component.push_back(curr);

                for (ll y : edges[curr])
                {
                    if (!visited[y])
                        q.push(y);
                }

            }

            for (ll p : component)
                news[p] = component.size();
        }

        cout << news[i] << " ";
    }

    cout << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}
