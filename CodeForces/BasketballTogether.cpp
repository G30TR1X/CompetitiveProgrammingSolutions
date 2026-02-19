#include <bits/stdc++.h>
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
    cin >> n >> k;
    for (ll i = 0; i < n; ++i)
        cin >> a[i];

    sort(a, a + n);
    ll wins = 0;
    for (ll i = n-1; i >= 0 && n > 0; --i)
    {
        ll ppl = (k/a[i])+1;
        ll strength = a[i]*ppl;
        if (ppl <= n && strength > k)
            n -= ppl, ++wins;
        else
            break;
    }

    cout << wins << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}
