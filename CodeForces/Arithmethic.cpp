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
string s;

void solve()
{
    ll a,b,c;
    cin >> a >> b >> c;
    if (a * b == c)
    {
        cout << "YES\n" << a << " " << b << " " << c << '\n';
        return;
    }
    else if (a * c == b)
    {
        cout << "YES\n" << a << " " << c << " " << b << '\n';
        return;
    }
    else if (b * c == a)
    {
        cout << "YES\n" << c << " " << b << " " << a << '\n';
        return;
    }

    cout << "NO\n";
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
