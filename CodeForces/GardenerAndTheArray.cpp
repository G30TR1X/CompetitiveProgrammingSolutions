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
string s;

void solve()
{
    cin >> n;
    vl a(n, 0);
    vvl b(n);
    map<ll,ll> bits;
    for (ll i = 0; i < n; ++i)
    {
        cin >> a[i];
        ll cnt = 0;
        for (ll j = 0; j < a[i]; ++j)
        {
            cin >> x;
            bits[x]++;
            b[i].push_back(x);
        }
    }

    for (ll i = 0; i < n; ++i)
    {
        ll cnt = 0;
        for (ll j = 0; j < a[i]; ++j)
        {
            if (bits[b[i][j]] > 1)
                cnt++;
        }

        if (cnt == a[i])
        {
            cout << "Yes\n";
            return;
        }
    }

    cout << "No\n";
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
