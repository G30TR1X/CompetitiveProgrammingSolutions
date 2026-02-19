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
    ll l,r;
    cin >> n >> l >> r;

    vl ans(n+1);
    for (ll i = 1; i <= n; ++i)
    {
        ll add = (l % i == 0) ? 0 : (i - (l % i));
        if (l+add > r)
        {
            cout << "NO" << endl;
            return;
        }

        ans[i] = l + add;
    }

    cout << "YES" << endl;
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
