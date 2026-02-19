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
    ull p,q;
    cin >> p >> q;
    if (p % 2 == 0 && q % 3 == 0)
    {
        cout << "Bob\n";
        return;
    }

    if (p == q)
    {
        cout << "Alice\n";
        return;
    }

    ull div2 = p / 2, div3 = q / 3;
    bool diff2 = p % 2 == q % (3*div2), diff3 = p % (2*div3) == q % 3;
    if (diff2 || diff3)
        cout << "Bob\n";
    else
        cout << "Alice\n";
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
