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
vvl graph(MAX_ARRAY_SIZE);
vb vis(MAX_ARRAY_SIZE);

void solve()
{
    cin >> n;
    unordered_map<ll, ll> counter;
    ll highest = 0;
    for (ll i = 0; i < n; ++i)
    {
        cin >> a[i];
        highest = max(highest, a[i]);
        counter[a[i]]++;
    }

    if (counter[highest] & 1)
    {
        cout << "YES" << endl;
        return;
    }
    else
    {
        for (auto [num, counter] : counter)
        {
            if (counter & 1)
            {
                cout << "YES" << endl;
                return;
            }
        }
    }

    cout << "NO" << endl;
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
