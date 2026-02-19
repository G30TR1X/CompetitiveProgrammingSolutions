#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define vl vector<ll>

const int MOD = 1e9 + 7;
const int MAX_ARRAY_SIZE = 1e6 + 1;
ll t,n,m,k,x,y,z,u,v;
ll a[MAX_ARRAY_SIZE], b[MAX_ARRAY_SIZE];
string s;

ll logba(ll a, ll b)
{
    return log2(a)/log2(b);
}

void solve()
{
    cin >> n;
    ll cost = 0;
    while (n != 0)
    {
        ll power = logba(n, 3);
        if (power == 0)
        {
            cost += n*3;
            n = 0;
            continue;
        }

        ll watermelons = (ll) pow(3, power);
        cost += (watermelons*3 + power * (watermelons/3));
        n -= watermelons;
    }

    cout << cost << endl;
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
