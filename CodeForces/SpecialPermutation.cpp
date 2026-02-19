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
ll t,n,m,k,a,b;
string s;

void solve()
{
    cin >> n >> a >> b;
    vl ans(n, -1);
    unordered_set<ll> seen;
    ans[0] = a;
    ans[n-1] = b;
    seen.insert(a);
    seen.insert(b);
    ll lastIndex = n-2, firstIndex = 1;
    ll low = 1, high = n;
    while (low < b && lastIndex >= n/2)
    {
        if (seen.find(low) == seen.end())
        {
            ans[lastIndex] = low;
            seen.insert(low);
            lastIndex--;
        }
        low++;
    }

    while (high > a && firstIndex < n/2)
    {
        if (seen.find(high) == seen.end())
        {
            ans[firstIndex] = high;
            seen.insert(high);
            firstIndex++;
        }
        high--;
    }

    if (seen.size() != n)
        cout << -1 << endl;
    else
    {
        for (ll x : ans)
            cout << x << " ";
        cout << endl;
    }
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
