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

void solve()
{
    cin >> s;
    ll n = s.size();
    ll consecutiveOne = 0;
    ll highest = consecutiveOne;
    for (ll i = 0; i < n; i++)
    {
        if (s[i] == '1')
            consecutiveOne++;
        else
            consecutiveOne = 0;

        highest = max(highest, consecutiveOne);
    }

    consecutiveOne = 0;
    for (ll i = 0; i < n && s[i] == '1'; ++i)
        consecutiveOne++;

    if (consecutiveOne == n)
    {
        cout << n*n << endl;
        return;
    }

    for (ll i = n-1; i >= 0 && s[i] == '1'; --i)
        consecutiveOne++;

    highest = max(highest, consecutiveOne);

    ll highestArea = 0;
    for (ll i = 0; i < highest; ++i)
    {
        ll area = (i+1) * (highest-i);
        highestArea = max(highestArea, area);
    }

    cout << highestArea << endl;
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
