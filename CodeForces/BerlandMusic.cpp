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
    ll zero = 0;
    for (ll i = 0; i < n; ++i)
        cin >> a[i];
    cin >> s;
    for (ll i = 0; i < n; ++i)
    {
        if (s[i] == '0')
            zero++;
    }

    if (zero == 0)
    {
        for (ll i = 0; i < n; ++i)
            cout << a[i] << " ";
        cout << endl;
        return;
    }

    unordered_map<ll, ll> mp;
    for (ll i = 0; i < n; ++i)
        mp[a[i]] = s[i] - '0';

    ll length = n;
    for (ll i = n; i > 0; --i)
    {
        if (mp[i] == 0)
            mp[i] = zero--;
        else
            mp[i] = length--;
    }

    for (ll i = 0; i < n; ++i)
        cout << mp[a[i]] << " ";
    cout << endl;
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
