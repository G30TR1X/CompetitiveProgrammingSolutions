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

ll sum(ll num)
{
    return ((num * (num + 1)) / 2);
}

void solve()
{
    cin >> n >> x;
    ll ans = 2*n-1, l = 1, r = ans;
    while (l <= r)
    {
        ll mid = l + (r-l)/2, msg;
        if (mid > n)
            msg = sum(n) + sum(n-1) - sum((2*n-1)-mid);
        else
            msg = sum(mid);

        if (msg >= x)
            ans = mid, r = mid-1;
        else
            l = mid+1;
    }
    
    cout << ans << '\n';
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
