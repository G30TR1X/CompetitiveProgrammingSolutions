#include <bits/stdc++.h>
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
    cin >> n >> m;
    for (ll i = 0; i < m; ++i)
        cin >> a[i];

    sort(a, a+m);
    vl distance(m);
    for (ll i = 0; i < m - 1; ++i)
        distance[i] = a[i+1] - a[i]-1;

    distance[m-1] = max(0ll, n - (a[m-1] - a[0]) - 1);
    sort(distance.rbegin(), distance.rend());
    ll dist = 0, ans = 0;
    for (ll i = 0; i < m; ++i)
    {
        ll actDist = distance[i] - dist * 2;
        if (actDist > 2)
            dist += 2, ans += actDist - 1;
        else if (actDist >= 1)
            dist++, ans++;
    }

    cout << n - ans << '\n';
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
