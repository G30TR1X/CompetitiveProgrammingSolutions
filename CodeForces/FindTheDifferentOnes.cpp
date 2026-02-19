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
    cin >> n;
    for (ll i = 1; i <= n; ++i)
        cin >> a[i];

    vl pre(n+1, 0);
    ll last = 0;
    for (ll i = 2; i <= n; ++i)
    {
        if (a[i] != a[i-1])
            last = i-1;

        pre[i] = last;
    }

    ll q;
    cin >> q;
    while (q--)
    {
        ll l,r;
        cin >> l >> r;

        ll nL = a[l], nR = a[r];
        if (nL != nR)
            cout << l << " " << r << '\n';
        else if (pre[r] != pre[l])
            cout << l << " " << pre[r] << '\n';
        else
            cout << "-1 -1\n";
    }

    cout << '\n';
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
