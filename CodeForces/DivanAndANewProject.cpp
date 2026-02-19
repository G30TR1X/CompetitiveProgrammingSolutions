#include <bits/stdc++.h>
#include <functional>
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
    vector<pair<ll,ll>> visits(n+1);
    for (ll i = 1; i <= n; ++i)
    {
        cin >> x;
        visits[i] = {x,i};
    }

    vector<ll> ans(n+1);
    ans[0] = 0;
    sort(visits.begin()+1, visits.end());
    ll time = 0, mul = 1, even = 2, left = -1, right = 1;
    for (ll i = n; i > 0; --i, --even)
    {
        if (even == 0)
            ++mul, even = 2;

        time += mul*2*visits[i].first;

        if (even & 1)
            ans[visits[i].second] = right++;
        else
            ans[visits[i].second] = left--;
    }

    cout << time << endl;
    for (ll i = 0; i <= n; ++i)
        cout << ans[i] << " ";
    cout << endl;
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
