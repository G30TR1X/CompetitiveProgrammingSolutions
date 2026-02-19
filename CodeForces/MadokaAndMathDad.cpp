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
    cin >> n;
    if (n == 1)
        cout << 1 << endl;
    else if (n == 2)
        cout << 2 << endl;
    else
    {
        ll length = n/2 + 1;
        string ans1 = "1", ans2 = "2";
        ll curr1 = 1, curr2 = 2;

        for (; curr1 < n;)
        {
            char currChar = *(ans1.end()-1);
            if (currChar == '2')
                ans1 += '1', ++curr1;
            else
                ans1 += '2', curr1 += 2;
        }

        for (; curr2 < n;)
        {
            char currChar = *(ans2.end()-1);
            if (currChar == '2')
                ans2 += '1', ++curr2;
            else
                ans2 += '2', curr2 += 2;
        }
        if (curr1 == n && curr2 == n)
        {
            cout << ((ans1[0] == '2') ? ans1 : ans2) << endl;
            return;
        }

        cout << ((curr1 == n) ? ans1 : ans2) << endl;
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
