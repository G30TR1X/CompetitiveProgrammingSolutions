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

    ll diff = abs(a[0] - a[1]);
    vl ans;
    ans.push_back(a[0]);
    bool flag = a[0] < a[1];
    for (ll i = 1; i < n; ++i)
    {
        if (flag)
        {
            if (a[i-1] > a[i])
            {
                flag = false;
                ans.push_back(a[i-1]);
            }
        }
        else
        {
            if (a[i-1] < a[i])
            {
                flag = true;
                ans.push_back(a[i-1]);
            }
        }
    }

    if ((flag && a[n-2] < a[n-1]) || (!flag && a[n-2] > a[n-1]))
        ans.push_back(a[n-1]);

    cout << ans.size() << '\n';
    for (ll a : ans)
        cout << a << " ";
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
