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
    cin >> s;
    for (ll i = 1; i < s.size(); ++i)
    {
        if (s[i] == s[i-1])
        {
            for (char c = 'a'; c <= 'z'; ++c)
            {
                if (c != s[i-1])
                {
                    if (i == s.size() - 1)
                    {
                        s[i] = c;
                        break;
                    }
                    else if (c != s[i+1])
                    {
                        s[i] = c;
                        break;
                    }
                }
            }
        }
    }

    cout << s << '\n';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}
