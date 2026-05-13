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
ll b[MAX_ARRAY_SIZE];
string s;

void solve()
{
    cin >> n >> m >> k;
    for (ll i = 0; i < n; ++i)
        cin >> b[i];

    vl diff(n-1);
    for (ll i = 0; i < n-1; ++i)
        diff[i] = b[i+1] - b[i] - 1;

    sort(diff.begin(), diff.end());

    ll ans = n;
    for (ll i = 0; i < n-k; ++i)
        ans += diff[i];

    cout << ans << '\n';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}
