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
    vl p(n), a(n), pos(n+1);
    for (ll i = 0; i < n; ++i)
    {
        cin >> p[i];
        pos[p[i]] = i;
    }

    for (ll i = 0; i < n; ++i)
        cin >> a[i];

    set<ll> seen;
    vl cut;
    ll curr = a[0];
    cut.push_back(curr);
    for (ll i = 1; i < n; ++i)
    {
        if (seen.find(a[i]) != seen.end())
        {
            cout << "NO\n";
            return;
        }

        if (a[i] != curr)
        {
            seen.insert(curr);
            cut.push_back(a[i]);
            curr = a[i];
        }
    }

    ll currPosIndex = pos[cut[0]];
    for (ll i = 0; i < cut.size(); ++i)
    {
        if (pos[cut[i]] < currPosIndex)
        {
            cout << "NO\n";
            return;
        }

        currPosIndex = pos[cut[i]];
    }

    cout << "YES\n";
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
