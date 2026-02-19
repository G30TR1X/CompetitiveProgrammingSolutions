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
string a,b;

void solve()
{
    cin >> n >> a >> b;
    ll sum = 0;
    for (ll i = 0; i < n; ++i) 
        sum += (a[i] == '1' ? 1 : -1);

    ll flip = 0;
    for (ll i = n-1; i >= 0; --i)
    {
        if (((a[i] + flip) & 1) != (b[i] & 1))
        {
            if (sum == 0)
                flip = !flip;
            else
            {
                cout << "NO\n";
                return;
            }
        }

        if (((a[i] + flip) & 1) == (b[i] & 1))
            sum += (((a[i] + flip) & 1) == 1 ? -1 : 1);
        else
        {
            cout << "NO\n";
            return;
        }
    }

    cout << "YES\n";
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
