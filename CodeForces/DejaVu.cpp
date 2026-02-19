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
ll t,n,m,k,q,y,z,u,v;
ll a[MAX_ARRAY_SIZE], x[MAX_ARRAY_SIZE], pre[35];
string s;

void solve()
{
    cin >> n >> q;
    for (ll i = 0; i < n; ++i)
        cin >> a[i];
    for (ll i = 0; i < q; ++i)
        cin >> x[i];

    ll minX = 31;
    for (ll i = 0; i < q; ++i)
    {
        if (x[i] >= minX)
            continue;

        for (ll j = 0; j < n; ++j)
        {
            if (a[j] % pre[x[i]] == 0)
                a[j] += pre[x[i]-1];
        }

        minX = x[i];
    }

    for (ll i = 0; i < n; ++i)
        cout << a[i] << " ";
    cout << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    pre[0] = 1;
    for (ll i = 1; i <= 30; ++i)
        pre[i] = pre[i-1] * 2;

    //freopen("input.txt", "r", stdin);

    cin >> t;
    while (t--)
        solve();

    return 0;
}
