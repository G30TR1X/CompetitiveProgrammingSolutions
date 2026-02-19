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
vvl graph(MAX_ARRAY_SIZE);
vb vis(MAX_ARRAY_SIZE);

void solve()
{
    cin >> n >> k;
    for (ll i = 1; i <= n; i++)
        cin >> a[i];

    for (ll i = 1; i <= k; i++)
        cin >> b[i];

    sort(a+1, a + n+1);
    sort(b+1, b + k+1);
    ll ans = 0, item = n;
    for (ll i = 1; i <= k && item > 0; ++i)
    {
        if (b[i] > item)
            break;
        else
        {
            for (ll j = 1; j < b[i]; j++)
                ans += a[item--];
            --item;
        }
    }

    while (item > 0)
        ans += a[item--];

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
