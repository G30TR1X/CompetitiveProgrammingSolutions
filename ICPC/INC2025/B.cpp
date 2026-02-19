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

    for (ll i = 0; i < n; ++i)
        cin >> a[i];

    if (m < n-1 || m > (n*(n-1)/2))
    {
        cout << "-1 -1" << endl;
        return;
    }

    vector<pair<ll, ll>> edge;
    for (ll i = 0; i < n-1; ++i)
        edge.push_back({a[i], a[i+1]});

    ll curr = 1;
    while (curr < n && edge.size() != m)
    {

    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    freopen("input.txt", "r", stdin);

    cin >> t;
    while (t--)
        solve();

    return 0;
}
