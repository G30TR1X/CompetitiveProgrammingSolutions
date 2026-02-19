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
    ll t0, t1, t2;
    cin >> t0 >> t1 >> t2;
    ll smallest = min(t0, min(t1, t2));

    if (smallest == t0)
        cout << max(t1, t2) - t0 << '\n';
    else
    {
        ll ans = min(abs(t0 - t1) + abs(t1 - t2), abs(t0 - t2) + abs(t2 - t1));
        cout << ans << '\n';
    }
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
