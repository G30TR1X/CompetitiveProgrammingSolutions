#include <algorithm>
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
string s;

void solve()
{
    cin >> n >> s;

    vl balance(n);
    balance[0] = s[0] == '(' ? 1 : -1;
    for (int i = 1; i < n; i++)
        balance[i] = balance[i - 1] + (s[i] == '(' ? 1 : -1);

    if (balance[n-1] != 0)
    {
        cout << "-1\n";
        return;
    }

    if (*min_element(balance.begin(), balance.end()) == 0 || *max_element(balance.begin(), balance.end()) == 0)
    {
        cout << "1\n";
        for (ll i = 0; i < n; ++i)
            cout << "1 ";
        cout << '\n';
        return;
    }

    vl ans(n);
    for (ll i = 0; i < n; ++i)
    {
        if (balance[i] > 0)
            ans[i] = 1;
        else if (balance[i] < 0)
            ans[i] = 2;
        else
            ans[i] = (balance[i-1] > 0 ? 1 : 2);
    }

    cout << "2\n";
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
