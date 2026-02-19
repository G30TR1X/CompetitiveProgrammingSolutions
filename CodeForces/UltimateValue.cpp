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
    cin >> n;
    for (ll i = 1; i <= n; ++i)
    {
        cin >> a[i];
        if ((i&1) == 0)
            a[i] = -a[i];
    }

    ll minIndex = 1, minVal = 0;
    for (ll i = 2; i <= n; i += 2)
    {
        if (a[i] <= minVal)
        {
            minIndex = i;
            minVal = a[i];
        }
    }

    ll index = minIndex, smallAbs = 0;
    for (ll i = index-1; i > 0; i -= 2)
    {
        if (a[i] + a[minIndex] <= smallAbs)
        {
            smallAbs = a[i] + a[minIndex];
            index = i;
        }
    }

    ll cost = minIndex - index, sum = 0;
    for (ll i = 1; i <= n; ++i)
        sum += a[i];

    cout << sum + cost << endl;
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
