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
    cin >> n >> k >> s;

    ll ans = INT_MAX;
    ll countW = 0;
    ll l = 0, r = 0;

    for (; r < k; ++r)
    {
        if (s[r] == 'W')
            ++countW;
    }

    ans = min(ans, countW);
    for (; r < n; ++r, ++l)
    {
        if (s[l] == 'W')
            --countW;

        if (s[r] == 'W')
            ++countW;

        ans = min(ans, countW);
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
