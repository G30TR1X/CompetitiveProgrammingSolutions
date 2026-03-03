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
    ll a = 1, b = 1, c = 1, div = 0, subN = n;
    for (ll i = 2; i * i <= n; ++i)
    {
        if (subN % i == 0)
        {
            if (div == 0)
                a = i;
            else
            {
                b = i, c = subN / i;
                break;
            }
            div++, subN /= i;
        }
    }

    if (a != 1 && b != 1 && c != 1 && a != b && b != c && c != a)
    {
        cout << "YES\n";
        cout << a << " " << b << " " << c << endl;
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
