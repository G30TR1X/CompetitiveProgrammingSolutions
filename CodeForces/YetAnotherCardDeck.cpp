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
    ll q;
    cin >> n >> q;
    map<ll, ll> mp;
    for (ll i = 1; i <= n; ++i)
    {
        cin >> a[i];
        if (mp.find(a[i]) != mp.end())
            continue;

        mp[a[i]] = i;
    }

    for (ll i = 0; i < q; ++i)
    {
        cin >> x;
        ll loc = mp[x];
        cout << loc << " ";
        mp[x] = 1;

        for (auto [color, deck] : mp)
        {
            if (color == x)
                continue;

            if (deck < loc)
                mp[color]++;
        }
    }

    cout << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    //freopen("input.txt", "r", stdin);

    solve();

    return 0;
}
