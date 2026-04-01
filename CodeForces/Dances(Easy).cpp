#include <algorithm>
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
string s;

bool check(ll k, vl a, vl b)
{
    for (ll i = 0; i < k; ++i)
        a.pop_back(), b.pop_back();

    reverse(b.begin(), b.end());

    for (ll i = 0; i < n-k; ++i)
        if (a[i] >= b[i])
            return false;

    return true;
}

void solve()
{
    cin >> n >> m;
    vl a(n),b(n);
    a[0] = 1;
    for (ll i = 1; i < n; ++i)
        cin >> a[i];

    for (ll i = 0; i < n; ++i)
        cin >> b[i];

    sort(a.begin(), a.end());
    sort(b.rbegin(), b.rend());

    ll l = 0, r = n;
    while (l < r)
    {
        ll mid = l + (r - l) / 2;
        if (check(mid, a, b))
            r = mid;
        else
            l = mid + 1;
    }

    cout << l << '\n';
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
