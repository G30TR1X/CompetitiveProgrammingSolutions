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

ll merge(ll a[], ll l, ll mid, ll r)
{
    ll n1 = mid-l+1, n2 = r-mid;

    ll L[n1], R[n2];
    for (ll i = 0; i < n1; ++i)
        L[i] = a[l+i];

    for (ll i = 0; i < n2; ++i)
        R[i] = a[mid+1+i];

    ll i = 0, j = 0, k = l;
    ll ans = 0;
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
            a[k++] = L[i++];
        else
        {
            a[k++] = R[j++];
            ans += n1-i;
        }
    }

    while (i < n1)
        a[k++] = L[i++];

    while (j < n2)
        a[k++] = R[j++];

    return ans;
}

ll inversion(ll a[], ll l, ll r)
{
    ll n = r-l+1, ans = 0;

    if (n == 1)
        return 0;

    ll mid = l + (r-l)/2;
    ans += inversion(a, l, mid);
    ans += inversion(a, mid+1, r);

    ans += merge(a, l, mid, r);

    return ans;
}

void solve()
{
    cin >> n;
    for (ll i = 0; i < n; ++i)
        cin >> a[i];

    ll ans = inversion(a, 0, n-1);
    cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    freopen("input.txt", "r", stdin);

    cin >> t;
    while (t--)
        solve();

    return 0;
}
