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
vvl graph(MAX_ARRAY_SIZE);
vb vis(MAX_ARRAY_SIZE);

void solve()
{
    cin >> s;
    if (s.size() <= 3)
    {
        cout << "invalid" << endl;
        return;
    }

    if (s[0] == '0' && s[1] == '9')
    {
        if (s.size() != 11)
        {
            cout << "invalid" << endl;
            return;
        }

        for (ll i = 2; i < s.size(); ++i)
        {
            if (s[i] == '+')
            {
                cout << "invalid" << endl;
                return;
            }
        }

        s.erase(s.begin());
        s = "+98" + s;
        cout << s << endl;
    }
    else if (s[0] == '9' && s[1] == '8')
    {
        if (s.size() != 12)
        {
            cout << "invalid" << endl;
            return;
        }

        for (ll i = 2; i < s.size(); ++i)
        {
            if (s[i] == '+')
            {
                cout << "invalid" << endl;
                return;
            }
        }

        s = '+' + s;
        cout << s << endl;
    }
    else if (s[0] == '+' && s[1] == '9' && s[2] == '8')
    {
        if (s.size() != 13)
        {
            cout << "invalid" << endl;
            return;
        }

        for (ll i = 3; i < s.size(); ++i)
        {
            if (s[i] == '+')
            {
                cout << "invalid" << endl;
                return;
            }
        }

        cout << s << endl;
    }
    else
    {
        cout << "invalid" << endl;
    }
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
