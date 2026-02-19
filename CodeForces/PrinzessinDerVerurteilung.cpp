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
    cin >> n >> s;
    vb alphabet(26, false);
    for (ll i = 0; i < n; ++i)
        alphabet[s[i] - 'a'] = true;

    for (ll i = 0; i < 26; ++i)
    {
        if (!alphabet[i])
        {
            cout << char('a' + i) << '\n';
            return;
        }
        else
        {
            alphabet[i] = false;
        }
    }

    for (ll i = 0; i < 26; ++i)
    {
        for (ll j = 0; j < n-1; ++j)
        {
            if (s[j] == char('a' + i))
                alphabet[s[j+1] - 'a'] = true;
        }

        for (ll j = 0; j < 26; ++j)
        {
            if (!alphabet[j])
            {
                cout << char('a' + i) << char('a' + j) << '\n';
                return;
            }
            else
            {
                alphabet[j] = false;
            }
        }
    }

    for (ll i = 0; i < 26; ++i)
    {
        for (ll j = 0; j < 26; ++j)
        {
            for (ll k = 0; k < n-2; ++k)
            {
                if (s[k] == char('a' + i) && s[k+1] == char('a' + j))
                    alphabet[s[k+2] - 'a'] = true;
            }

            for (ll k = 0; k < 26; ++k)
            {
                if (!alphabet[k])
                {
                    cout << char('a' + i) << char('a' + j) << char('a' + k) << '\n';
                    return;
                }
                else
                {
                    alphabet[k] = false;
                }
            }
        }
    }

    cout << "aaaa" << '\n';
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
