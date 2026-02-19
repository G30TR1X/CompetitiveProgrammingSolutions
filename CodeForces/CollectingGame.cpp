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

void solve()
{
    cin >> n;
    vector<pair<ll, ll>> a;
    for (ll i = 0; i < n; ++i)
    {
        cin >> x;
        a.push_back({x, i});
    }

    sort(a.begin(), a.end());
    ll ans[n];
    vl prefix(n);
    prefix[0] = a[0].first;
    ans[a[0].second] = 0;
    ans[a[n-1].second] = n-1;
    for (ll i = 1; i < n; ++i)
        prefix[i] = prefix[i-1] + a[i].first;

    for (ll i = n-2; i >= 0; --i)
    {
        if (prefix[i] >= a[i+1].first)
            ans[a[i].second] = ans[a[i+1].second];
        else
            ans[a[i].second] = i;
    }

    for (ll i : ans)
        cout << i << " ";
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
