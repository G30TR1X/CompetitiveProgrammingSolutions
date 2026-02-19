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
vvl graph(MAX_ARRAY_SIZE);
vb vis(MAX_ARRAY_SIZE);

void solve()
{
    cin >> n >> m;
    ll curr = 0, sumMin = 0, final = 0;
    for (ll i = 0; i < n; ++i)
        cin >> a[i] >> b[i];

    for (ll i = 0; i < n; ++i)
    {
        ll time = a[i]-sumMin;
        if (curr == b[i])
            final += time;
        else
            final += time-1;

        sumMin = a[i];
        curr = b[i];
    }

    final += m-a[n-1];
    cout << final << endl;
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
