#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define vl vector<ll>
#define vul vector<ull>
#define vs vector<string>
#define vc vector<char>
#define vb vector<bool>
#define vvl vector<vector<ll>>
#define vvb vector<vector<bool>>

const int MOD = 1e9 + 7;
const int MAX_ARRAY_SIZE = 1e5 + 1;
ll t,n,m,k,x,y,z,u,v;
string s;

void solve()
{
    cin >> n;
    vl a(n);
    for (ll i = 0; i < n; ++i)
        cin >> a[i];

    vl ans;
    for (ll i = 0; i < n; ++i)
    {
        ll l = 1, r = i+1;
        while (l <= r)
        {
            ll mid = l + (r-l)/2;
            if (a[i - mid + 1] >= mid)
                l = mid+1;
            else
                r = mid-1;
        }

        ans.push_back(r);
    }

    for (ll u : ans)
        cout << u << ' ';
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
