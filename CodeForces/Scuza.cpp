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
    ll q;
    cin >> n >> q;
    for (ll i = 0; i < n; ++i)
        cin >> a[i];

    ll prefix[MAX_ARRAY_SIZE];
    prefix[0] = a[0];
    for (ll i = 1; i < n; ++i)
        prefix[i] = prefix[i-1] + a[i];

    for (ll i = 1; i < n; ++i)
    {
        if (a[i-1] >= a[i])
            a[i] = a[i-1];
    }

    ll curr = 0, height = 0, last = 0;
    for (ll i = 0; i < q; ++i)
    {
        cin >> x;
        ll l = 0, r = n-1, ans = 0;
        while (l <= r)
        {
            ll mid = l + (r-l)/2;
            if (a[mid] <= x)
                l = mid+1, ans = prefix[mid];
            else
                r = mid-1;
        }

        cout << ans << ' ';
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
