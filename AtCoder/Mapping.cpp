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
    cin >> n >> m;
    map<ll,ll> mp;
    for (ll i = 0; i < n; ++i)
    {
        cin >> a[i];
        mp[a[i]]++;
    }

    ll allDiff = 0;
    bool notWear = false;
    for (auto [t,p] : mp)
    {
        if (p <= 1)
            ++allDiff;
    }

    for (ll i = 1; i <= m; ++i)
    {
        if (mp.find(i) == mp.end())
        {
            notWear = true;
            break;
        }
    }

    cout << (allDiff == n ? "Yes\n" : "No\n");
    cout << (notWear ? "No\n" : "Yes\n");

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}
