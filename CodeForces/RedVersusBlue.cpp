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
ll t,n,m,r,b;
string s;

void solve()
{
    cin >> n >> r >> b;

    ll divide = r/(b+1);
    ll remainder = r % (divide*(b+1));
    string ans = "";
    while (b > 0)
    {
        for (ll i = 0; i < divide && r > 0; i++, r--)
            ans += 'R';

        if (remainder > 0)
            ans += 'R', --r, --remainder;

        ans += 'B';
        --b;
    }

    while (r > 0)
        ans += 'R', --r;

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
