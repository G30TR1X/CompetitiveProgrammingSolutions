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
ll t, n, m, k, x, y, z, u, v;

void solve()
{
    string a, b;
    cin >> a >> b;

    string newA = "", newB = "";
    for (ll i = 0; i < a.size(); ++i)
    {
        newA += a[i];
        if (newA.size() >= 4 && newA.substr(newA.size() - 4, 4) == "(xx)")
        {
            newA.erase(newA.end() - 4, newA.end());
            newA += "xx";
        }
    }

    for (ll i = 0; i < b.size(); ++i)
    {
        newB += b[i];
        if (newB.size() >= 4 && newB.substr(newB.size() - 4, 4) == "(xx)")
        {
            newB.erase(newB.end() - 4, newB.end());
            newB += "xx";
        }
    }

    cout << (newA == newB ? "Yes" : "No") << endl;
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
