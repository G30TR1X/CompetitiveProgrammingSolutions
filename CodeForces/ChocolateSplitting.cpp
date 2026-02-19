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
    ll dark = 0, white = 0, longestDark = 0, longestWhite = 0, i = 0;
    while (i < n)
    {
        ll len = 0;
        char choco = s[i];
        while (i < n && s[i] == choco)
            ++len, ++i;

        if (choco == '0')
            dark += len, longestDark = max(longestDark, len);
        else
            white += len, longestWhite = max(longestWhite, len);
    }

    ll left = 0, right = 0, outside = 0;
    if (s[0] == s[n-1])
    {
        i = 0;
        ll j = n-1;
        while (i < j && s[i] == s[0])
            ++left, ++i;

        while (j >= i && s[j] == s[0])
            ++right, --j;

        ll opposite = (s[0] == '0') ? white : dark;
        outside = left + right + opposite;
    }
    else
    {
        ll outsideDark = 0, outsideWhite = 0, j = n-1;
        i = 0;
        if (s[0] == '0')
        {
            while (i < n && s[i] == '0')
                ++outsideDark, ++i;
            
            while (j >= 0 && s[j] == '1')
                ++outsideWhite, --j;
        }
        else
        {
            while (i < n && s[i] == '1')
                ++outsideWhite, ++i;
            
            while (j >= 0 && s[j] == '0')
                ++outsideDark, --j;
        }

        outside = max(outsideDark + white, outsideWhite + dark);
    }

    cout << max(dark, max(white, max(longestDark + white, max(longestWhite + dark, outside)))) << '\n';
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
