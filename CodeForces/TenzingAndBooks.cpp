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
ll a[MAX_ARRAY_SIZE], b[MAX_ARRAY_SIZE], c[MAX_ARRAY_SIZE];
string s;

void solve()
{
    cin >> n >> x;
    for (ll i = 0; i < n; ++i)
        cin >> a[i];
    for (ll i = 0; i < n; ++i)
        cin >> b[i];
    for (ll i = 0; i < n; ++i)
        cin >> c[i];

    ll reverseX = ~x;
    ll fav = 0, stackA = 0, stackB = 0, stackC = 0;
    while (fav != x && stackA < n && stackB < n && stackC < n)
    {
        bool a1 = false, b1 = false, c1 = false;
        if ((a[stackA] & reverseX) != 0)
            a1 = true;
        if ((b[stackB] & reverseX) != 0)
            b1 = true;
        if ((c[stackC] & reverseX) != 0)
            c1 = true;

        if (a1 && b1 && c1)
            break;

        if (!a1 && stackA < n)
            fav |= a[stackA++];

        if (!b1 && stackB < n)
            fav |= b[stackB++];

        if (!c1 && stackC < n)
            fav |= c[stackC++];
    }

    if (fav == x)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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
