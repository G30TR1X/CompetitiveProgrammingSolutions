#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define vl vector<ll>

int MOD = 1e9 + 7;
const int MAX_ARRAY_SIZE = 1e6 + 1;
ll t,n,m,k,x,y,z,u,v;
ll a[MAX_ARRAY_SIZE], b[MAX_ARRAY_SIZE];
string s;

ll powMOD(ll a, ll b)
{
    if (b == 0)
        return 1;

    if (b == 1)
        return a%MOD;

    if (b & 1)
    {
        ll res = powMOD(a, (b-1)/2);
        res = (res*res)%MOD;
        return ((res*a)%MOD);
    }
    else
    {
        ll res = powMOD(a, b/2);
        return ((res*res)%MOD);
    }
}

void solve()
{
    //freopen("input.txt", "r", stdin);
    cin >> x >> y >> z;
    MOD = z;

    cout << powMOD(x, y) << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}
