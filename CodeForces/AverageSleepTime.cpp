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
    for (ll i = 0; i < n; ++i)
        cin >> a[i];

    vl prefix(n+1);
    prefix[0] = 0;
    for (ll i = 1; i <= n; ++i)
        prefix[i] = prefix[i-1] + a[i-1];

    double ans = 0;
    for (ll i = k; i <= n; ++i)
        ans += prefix[i] - prefix[i-k];

    printf("%.10f\n", ans / (double) (n - k + 1));
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}
