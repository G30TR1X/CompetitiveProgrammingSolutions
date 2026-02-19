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
    vvl box(n, vl(n));
    for (ll i = 0; i < n; ++i)
        for (ll j = 0; j < n; ++j)
            cin >> box[i][j];

    ll mismatch = 0;
    for (ll i = 0; i < n/2; ++i)
        for (ll j = 0; j < n; ++j)
            if (box[i][j] != box[n-1-i][n-1-j])
                mismatch++;

    if (n & 1)
    {
        for (ll i = 0; i < n/2; ++i)
            if (box[n/2][i] != box[n/2][n-1-i])
                mismatch++;
    }

    ll left = k - mismatch;
    if (left < 0)
        cout << "NO" << endl;
    else
    {
        if (n & 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            if (left & 1)
                cout << "NO" << endl;
            else
                cout << "YES" << endl;
        }
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
