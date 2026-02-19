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
    cin >> n >> k >> s;
    ll zero = 0;
    for (ll i = 0; i < n; ++i)
    {
        if (s[i] == '0')
            ++zero;
    }

    ll one = n-zero, diff = abs(one-zero), tried = diff/2;

    if (one == zero)
    {
        if (!(k&1))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;

        return;
    }

    if (k == tried)
        cout << "YES" << endl;
    else if (k < tried)
        cout << "NO" << endl;
    else
    {
        k -= tried;
        if (!(k&1))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
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
