#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define vl vector<ll>

const int MOD = 1e9 + 7;
const int MAX_ARRAY_SIZE = 1e6 + 1;
ll t,n,m,k,x,y,z,u,v;
ll a[MAX_ARRAY_SIZE], b[MAX_ARRAY_SIZE];
string s;

bool check(vl v, ll dist, ll k)
{
    ll cnt = 1, prev = v[0];
    for (ll i = 1; i < n; ++i)
    {
        if (v[i] - prev >= dist)
        {
            cnt++;
            prev = v[i];
        }
    }

    return cnt >= k;
}

void solve()
{
    cin >> n >> k;
    vl v(n);
    for (int i = 0; i < n; ++i)
        cin >> v[i];

    sort(v.begin(), v.end());
    ll minDist = 1, maxDist = v[n-1] - v[0], ans = 1;
    while (minDist <= maxDist)
    {
       ll dist = minDist + (maxDist - minDist)/2;

        if (check(v,dist,k))
            ans = dist, minDist = dist + 1;
        else
            maxDist = dist - 1;
    }

    cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    freopen("input.txt", "r", stdin);

    cin >> t;
    while (t--)
        solve();

    return 0;
}
