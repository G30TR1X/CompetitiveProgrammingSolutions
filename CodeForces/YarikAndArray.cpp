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
    for (ll i = 0; i < n; ++i)
        cin >> a[i];

    ll ans = INT_MIN;
    for (ll i = 0; i < n; ++i)
    {
        if (a[i] < 0)
        {
            ans = max(ans, a[i]);
            continue;
        }

        ll sum = a[i];
        while (i < n-1 && ((a[i] & 1) != (a[i+1] & 1)))
        {
            ans = max(ans, a[i]);
            ++i;
            sum = max(a[i], sum + a[i]);
            ans = max(ans, sum);
        }

        ans = max(ans, sum);
    }

    cout << ans << endl;
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
