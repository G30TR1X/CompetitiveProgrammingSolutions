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
    for (ll i = 1; i <= n; ++i)
        cin >> a[i];

    unordered_set<ll> read;
    ll days = 0, highest = 0;
    for (ll i = 1; i <= n; ++i)
    {
        if (read.find(i) == read.end())
        {
            ++days;
            for (ll j = i; j <= a[i]; ++j)
                read.insert(j);
            highest = max(highest, a[i]);
        }
        else
        {
            if (read.find(a[i]) == read.end())
            {
                for (ll j = highest; j <= a[i]; ++j)
                    read.insert(j);
                highest = max(highest, a[i]);
            }
        }
    }

    cout << days << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}
