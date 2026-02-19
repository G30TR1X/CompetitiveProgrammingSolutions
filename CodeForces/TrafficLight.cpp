#include <bits/stdc++.h>
#include <ostream>
using namespace std;

#define ll long long
#define ull unsigned long long
#define vl vector<ll>

const int MOD = 1e9 + 7;
const int MAX_ARRAY_SIZE = 1e6 + 1;
ll t,n,m,k,x,y,z,u,v;
ll a[MAX_ARRAY_SIZE], b[MAX_ARRAY_SIZE];
string s;

void solve()
{
    char curr;
    cin >> n >> curr >> s;
    if (curr == 'g')
    {
        cout << 0 << endl;
        return;
    }

    ll len[n], counter = 0;
    for (ll i = n-1; i >= 0; --i)
    {
        if (s[i] == 'g')
            counter = 0;
        else
            ++counter;

        len[i] = counter;
    }

    for (ll i = n-1; s[i] != 'g'; --i)
        len[i] = ++counter;

    ll ans = 0;
    for (ll i = 0; i < n; ++i)
    {
        if (s[i] == curr)
            ans = max(ans, len[i]);
    }

    cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> t;
    while (t--)
        solve();

    return 0;
}
