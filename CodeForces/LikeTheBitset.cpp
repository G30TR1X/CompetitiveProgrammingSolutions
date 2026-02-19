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
    cin >> n >> k >> s;
    ll consec = 0;
    for (ll i = 0; i < n; ++i)
    {
        if (s[i] == '1')
            consec++;
        else
            consec = 0;

        if (consec >= k)
        {
            cout << "NO" << endl;
            return;
        }
    }

    cout << "YES" << endl;
    ll low = 1, high = n;
    for (ll i = 0; i < n; ++i)
    {
        if (s[i] == '0')
            cout << high-- << " ";
        else
            cout << low++ << " ";
    }

    cout << endl;
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
