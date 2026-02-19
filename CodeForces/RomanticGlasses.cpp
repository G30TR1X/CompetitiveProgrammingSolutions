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
    cin >> n;
    for (ll i = 0; i < n; ++i)
        cin >> a[i];

    vl prefixLulia(n,0), prefixDate(n,0);
    map<ll,ll> mp;

    prefixLulia[0] = a[0];
    mp[prefixDate[0] - prefixLulia[0]]++;
    for (ll i = 1; i < n; ++i)
    {
        prefixLulia[i] += prefixLulia[i-1];
        prefixDate[i] += prefixDate[i-1];

        if (i & 1)
            prefixDate[i] += a[i];
        else
            prefixLulia[i] += a[i];

        mp[prefixDate[i] - prefixLulia[i]]++;
        if (mp[prefixDate[i] - prefixLulia[i]] == 2 || prefixDate[i] - prefixLulia[i] == 0)
        {
            cout << "YES\n";
            return;
        }
    }

    cout << "NO\n";
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
