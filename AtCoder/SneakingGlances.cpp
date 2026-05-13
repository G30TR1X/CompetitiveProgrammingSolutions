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

    double curr = 0.5;
    ll ans = 0;
    for (ll i = 0; i < n; ++i)
    {
        bool positive = (curr > 0.0);
        if (curr > 0.0)
            curr -= a[i];
        else
            curr += a[i];

        if ((positive && curr < 0.0) || (!positive && curr > 0.0))
            ++ans;
    }
    
    cout << ans << '\n';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}
