#include <bits/stdc++.h>
#include <pthread.h>
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
    string pattern = "";
    bool seen[26] = {0};
    ll i = 0;
    for (; i < s.size(); ++i)
    {
        if (seen[s[i] - 'a'])
            break;

        seen[s[i] - 'a'] = 1;
        pattern += s[i];
    }

    ll patternSize = pattern.size();
    for (ll index = 0; i < s.size(); ++i, index = (index + 1) % patternSize)
    {
        if (pattern[index] != s[i])
        {
            cout << "NO" << endl;
            return;
        }
    }

    cout << "YES" << endl;
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
