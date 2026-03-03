#include <bits/stdc++.h>
#include <ios>
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
    cin >> n;
    ll sum = 0;
    for (ll i = 0; i < n; ++i)
    {
        cin >> a[i];
        sum += a[i];
    }

    ll leftSumMax = a[0], maxEnd = a[0];
    for (ll i = 1; i < n-1; ++i)
        maxEnd = max(a[i], maxEnd + a[i]), leftSumMax = max(leftSumMax, maxEnd);

    ll rightSumMax = a[n-1];
    maxEnd = a[n-1];
    for (ll i = n-2; i > 0; --i)
        maxEnd = max(a[i], maxEnd + a[i]), rightSumMax = max(rightSumMax, maxEnd);

    ll maximum = max(leftSumMax, rightSumMax);
    if (sum > maximum)
        cout << "YES\n";
    else
        cout << "NO\n";
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
