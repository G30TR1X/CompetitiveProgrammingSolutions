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
    map<ll,ll> exit;
    for (ll i = 0; i < n; ++i)
        cin >> a[i];

    for (ll i = 0; i < n; ++i)
    {
        cin >> b[i];
        exit[b[i]] = i;
    }

    ll ans = 0, longest = exit[a[0]];
    for (ll i = 1; i < n; ++i)
    {
        if (exit[a[i]] > longest)
            longest = exit[a[i]];
        else
            ++ans;
    }
    
    cout << ans << '\n';
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
