#include <bits/stdc++.h>
#include <pthread.h>
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
    vvl station(101, vl(101, 0));
    for (ll i = 1; i <= n-1; ++i)
    {
        for (ll j = i+1; j <= n; ++j)
        {
            cin >> x;
            station[i][j] = x;
        }
    }

    for (ll i = 1; i <= n-2; ++i)
    {
        for (ll j = i+1; j <= n-1; ++j)
        {
            for (ll k = j+1; k <= n; ++k)
            {
                if (station[i][j] + station[j][k] < station[i][k])
                {
                    cout << "Yes\n";
                    return;
                }
            }
        }
    }
    
    cout << "No\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}
