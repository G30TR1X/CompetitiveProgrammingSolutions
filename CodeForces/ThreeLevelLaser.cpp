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

ll powMOD(ll a, ll b);
ll addMOD(ll a, ll b);
ll subMOD(ll a, ll b);
ll mulMOD(ll a, ll b);
ll divMOD(ll a, ll b);

const int MOD = 1e9 + 7;
const int MAX_ARRAY_SIZE = 1e6 + 1;
ll t,n,m,k,x,y,z,u,v;
ll a[MAX_ARRAY_SIZE], b[MAX_ARRAY_SIZE];
string s;
vvl graph(MAX_ARRAY_SIZE);
vb vis(MAX_ARRAY_SIZE);

void solve()
{
    cin >> n >> u;
    for (ll i = 0; i < n; ++i)
        cin >> a[i];

    ll i = 0;
    for (; i < n; ++i)
    {
        if (a[n-1] - a[i] <= u)
            break;
    }

    if (n-i <= 2)
    {
        cout << -1 << endl;
        return;
    }

    double maxEfficieny = -1e10;
    for (ll j = i+1; j < n; ++j)
    {
        double calc = (double)(a[n-1] - a[j]) / (a[n-1] - a[i]);
        maxEfficieny = max(maxEfficieny, calc);
    }

    cout << maxEfficieny << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}
