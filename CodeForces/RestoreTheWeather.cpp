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
    cin >> n >> k;
    vector<pair<ll,ll>> day;
    for (ll i = 0; i < n; ++i)
    {
        cin >> x;
        day.push_back({x,i});
    }

    for (ll i = 0; i < n; ++i)
        cin >> a[i];

    sort(day.begin(), day.end());
    sort(a, a+n);

    for (ll i = 0; i < n; ++i)
        b[day[i].second] = a[i];

    for (ll i = 0; i < n; ++i)
        cout << b[i] << " ";
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
