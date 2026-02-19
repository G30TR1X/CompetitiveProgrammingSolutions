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

ll lcm(ll a, ll b)
{
    return (a * b) / __gcd(a, b);
}

void solve()
{
    cin >> n >> x >> y;
    ll high = n/x, low = n/y, between = n/lcm(x,y);
    high -= between;
    low -= between;
    ll scoreX = (n*(n+1))/2 - ((n-high)*(n-high+1))/2;
    ll scoreY = (low*(low+1))/2;

    cout << scoreX - scoreY << endl;
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
