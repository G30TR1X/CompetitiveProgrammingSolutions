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
    cin >> t >> x;
    for (ll i = 0 ; i <= t; ++i)
        cin >> a[i];

    vector<pair<ll,ll>> ans;
    ans.push_back({ 0, a[0] });
    ll curr = a[0];
    for (ll i = 0; i <= t; ++i)
    {
        if (abs(curr - a[i]) >= x)
        {
            ans.push_back({ i, a[i] });
            curr = a[i];
        }
    }

    for (auto [time, read] : ans)
        cout << time << ' ' << read << '\n';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}
