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
    cin >> n;
    vvl uni(n);
    for (ll i = 0; i < n; ++i)
        cin >> a[i];

    for (ll i = 0; i < n; ++i)
        cin >> b[i];

    for (ll i = 0; i < n; ++i)
        uni[a[i]-1].push_back(b[i]);

    vl ans(n,0);
    for (ll i = 0; i < n; ++i)
    {
        if (uni[i].size() == 0)
            continue;

        sort(uni[i].rbegin(), uni[i].rend());
        ll len = uni[i].size();
        vl prefix;
        prefix.push_back(uni[i][0]);
        for (ll j = 1; j < len; ++j)
            prefix.push_back(prefix[j-1] + uni[i][j]);

        for (ll j = 1; j <= len; ++j)
        {
            ll teams = len / j;
            ans[j-1] += prefix[teams*j-1];
        }
    }

    for (ll i = 0; i < n; ++i)
        cout << ans[i] << ' ';
    cout << '\n';
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
