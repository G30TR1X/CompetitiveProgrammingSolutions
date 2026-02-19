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
    ll parity = n&1;
    for (ll i = 0; i < k; i++)
        cin >> a[i];

    if (parity)
    {
        ll sum = 0;
        for (ll i = 0; i < k; ++i)
            if (a[i] & 1)
                sum++;

        cout << ((sum & 1) ? "odd" : "even") << endl;
    }
    else
        cout << ((a[k-1] & 1) ? "odd" : "even") << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}
