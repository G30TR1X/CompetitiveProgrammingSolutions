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

    if ((n & 1) == 0)
    {
        string ans = "66";
        for (ll i = 2; i < n; ++i)
            ans = '3' + ans;

        cout << ans << endl;
    }
    else
    {
        if (n == 1)
        {
            cout << -1 << endl;
            return;
        }

        string ans = "66";
        ll digit3 = 0;
        for (ll i = 2; i < n; ++i)
        {
            if (i == 3)
                ans = "6" + ans;
            else
                ans = "3" + ans, ++digit3;
        }

        if (digit3 & 1)
            cout << -1 << endl;
        else
            cout << ans << endl;
    }
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
