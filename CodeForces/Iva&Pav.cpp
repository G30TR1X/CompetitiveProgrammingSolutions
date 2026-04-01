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
const int MAX_ARRAY_SIZE = 200000;
ll t,n,m,k,x,y,z,u,v;
string s;

bool check(ll start, ll end, vvl &pre)
{
    ll sum = 0;
    for (ll i = 0; i < 30; ++i)
    {
        if ((pre[i][end] - pre[i][start-1]) == 0)
            sum += (1ll << i);
    }

    return sum >= k;
}

void solve()
{
    cin >> n;
    vl a(n+1);
    vvl pre(30, vl(n+1));
    for (ll i = 1; i <= n; ++i)
        cin >> a[i];

    for (ll i = 0; i < 30; ++i)
    {
        pre[i][0] = 0;
        for (ll j = 1; j <= n; ++j)
        {
            if ((a[j] >> i) & 1)
                pre[i][j] = pre[i][j-1];
            else
                pre[i][j] = pre[i][j-1] + 1;
        }
    }
    
    ll q;
    cin >> q;
    while (q--)
    {
        ll l;
        cin >> l >> k;

        if (a[l] < k)
        {
            cout << "-1 ";
            continue;
        }

        ll low = l, r = n, ans = -1;
        while (low <= r)
        {
            ll mid = low + (r - low) / 2;
            if (check(l, mid, pre))
                ans = mid, low = mid + 1;
            else
                r = mid - 1;
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
