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

ll isPalindrome(string word)
{
    for (int i = 0; i < n; i++)
    {
        if (word[i] != word[n-i-1])
            return 0;
    }
    return 1;
}

void solve()
{
    cin >> n >> s;
    if (isPalindrome(s))
    {
        cout << 0 << endl;
        return;
    }

    unordered_set<char> seenChar;
    for (ll i = 0; i < n; ++i)
        seenChar.insert(s[i]);

    ll ans = INT_MAX;
    for (char c : seenChar)
    {
        ll l = 0, r = n-1, del = 0;
        while (l < r)
        {
            if (s[l] == s[r])
            {
                l++, r--;
            }
            else
            {
                if (s[l] == c)
                    ++del, l++;
                else if (s[r] == c)
                    ++del, r--;
                else
                {
                    del = INT_MAX;
                    break;
                }
            }
        }

        ans = min(ans, del);
    }

    if (ans == INT_MAX)
        cout << -1 << endl;
    else
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
