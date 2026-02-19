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

ll check(ll d, vl prefix)
{
    ll minN = prefix[d-1], maxN = prefix[d-1];
    for (ll i = d*2-1; i < n; i += d)
    {
        ll sum = prefix[i] - prefix[i-d];
        minN = min(minN, sum);
        maxN = max(maxN, sum);
    }

    return maxN - minN;
}

void solve()
{
    cin >> n;
    for (ll i = 0; i < n; ++i)
        cin >> a[i];

    vl divisor, prefix(n);
    prefix[0] = a[0];
    for (ll i = 1; i < n; ++i)
    {
        if (n % i == 0)
            divisor.push_back(i);

        prefix[i] = prefix[i-1] + a[i];
    }

    ll ans = 0;
    for (ll d : divisor)
    {
        ll maxDiff = check(d, prefix);
        ans = max(ans, maxDiff);
    }

    cout << ans << endl;
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
