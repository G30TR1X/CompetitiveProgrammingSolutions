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
    for (ll i = 1; i <= n; ++i)
        cin >> a[i];

    for (ll i = 1; i <= n; ++i)
        cin >> b[i];

    if (a[1] == 0)
    {
        cout << "NO" << endl;
        return;
    }

    if (a[k] == 1)
    {
        cout << "YES" << endl;
        return;
    }

    ll openStation = 0;
    for (ll i = k; i <= n; ++i)
    {
        if (a[i] == 1 && b[i] == 1)
            openStation = i;
    }

    if (openStation == 0)
    {
        cout << "NO" << endl;
        return;
    }

    if (b[k] == 1)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}
