#include <bits/stdc++.h>
#include <cerrno>
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
    cin >> k >> n >> m >> x >> y;
    if (x > y)
        swap(x, y), swap(n,m);

    ll portions = (k-n)/x;
    portions = max(0ll, portions);
    k -= portions*x;
    if (k >= n)
        k -= x, ++portions;

    ll secondPortion = (k-m)/y;
    secondPortion = max(0ll, secondPortion);
    portions += secondPortion;
    k -= secondPortion*y;
    if (k >= m)
        k -= y, ++portions;

    cout << ((portions <= 0) ? 0 : portions) << endl;
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
