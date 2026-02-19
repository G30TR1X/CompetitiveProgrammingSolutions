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

void solve()
{
    cin >> n;
    ll ans[n+1];
    for (ll i = 1; i <= n; ++i)
        cin >> a[i], ans[i] = -1;

    cin >> s;
    for (ll i = 1; i <= n; ++i)
    {
        if (ans[i] != -1)
            continue;

        unordered_set<ll> seen;
        ll num = i, black = 0;
        while (seen.find(num) == seen.end())
        {
            if (s[num-1] == '0')
                ++black;

            seen.insert(num);
            num = a[num];
        }

        for (ll s : seen)
            ans[s] = black;
    }

    for (ll i = 1; i <= n; ++i)
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
