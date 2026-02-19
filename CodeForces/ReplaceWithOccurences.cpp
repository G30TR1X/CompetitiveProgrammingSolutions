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
    ll maximum = n;
    unordered_set<ll> seen;
    unordered_map<ll,ll> counter;
    for (ll i = 0; i < n; ++i)
    {
        cin >> a[i];
        if (seen.find(a[i]) == seen.end())
            seen.insert(a[i]), maximum -= a[i];

        counter[a[i]]++;
    }

    if (maximum != 0)
    {
        cout << -1 << endl;
        return;
    }

    for (auto [x,y] : counter)
    {
        if (x != y)
        {
            cout << -1 << endl;
            return;
        }
    }

    for (ll i = 0; i < n; ++i)
        cout << a[i] << " ";
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
