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

    ll l = 1, r = n;
    ll mini = 1, maxi = n;
    while (l < r)
    {
        if (a[l] == mini || a[l] == maxi)
        {
            if (a[l] == mini)
                ++mini;
            if (a[l] == maxi)
                --maxi;
            ++l;
            continue;
        }

        if (a[r] == mini || a[r] == maxi)
        {
            if (a[r] == mini)
                ++mini;
            if (a[r] == maxi)
                --maxi;
            --r;
            continue;
        }

        break;
    }

    if (r-l+1 >= 4)
        cout << l << " " << r << '\n';
    else
        cout << "-1\n";
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
