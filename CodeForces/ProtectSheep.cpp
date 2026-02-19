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
    cin >> n >> k;
    vs lawn(n);

    for (ll i = 0; i < n; ++i)
        cin >> lawn[i];

    bool notSafe = false;
    for (ll i = 0; i < n && !notSafe; ++i)
    {
        for (ll j = 0; j < k && !notSafe; ++j)
        {
            if (lawn[i][j] == 'S')
            {
                if ((i != 0 && lawn[i-1][j] == 'W') || (i != n-1 && lawn[i+1][j] == 'W') || (j != 0 && lawn[i][j-1] == 'W') || (j != k-1 && lawn[i][j+1] == 'W'))
                    notSafe = true;
            }
            else if (lawn[i][j] == '.')
                lawn[i][j] = 'D';
        }
    }

    if (notSafe)
        cout << "NO" << endl;
    else
    {
        cout << "YES" << endl;
        for (ll i = 0; i < n; ++i)
            cout << lawn[i] << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}
