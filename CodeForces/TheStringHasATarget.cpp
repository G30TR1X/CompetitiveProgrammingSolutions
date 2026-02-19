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
    cin >> n >> s;
    ll index = 0;
    char smallest = '|';
    for (ll i = 1; i < n; ++i)
    {
        if (s[0] >= s[i] && smallest >= s[i])
            smallest = s[i], index = i;
    }

    if (smallest == '|')
    {
        cout << s << endl;
        return;
    }

    s.erase(s.begin() + index);
    s = smallest + s;
    cout << s << endl;
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
