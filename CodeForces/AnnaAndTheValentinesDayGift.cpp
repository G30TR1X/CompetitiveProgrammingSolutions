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
    cin >> n >> m;
    vl zero;
    ll sum = 0;
    for (ll i = 0; i < n; ++i)
    {
        cin >> a[i];
        ll length = 0, sufZero = 0;
        while (a[i] && a[i] % 10 == 0)
            ++sufZero, ++length, a[i] /= 10;

        while (a[i])
            ++length, a[i] /= 10;

        sum += length;
        if (sufZero != 0)
            zero.push_back(sufZero);
    }

    sort(zero.rbegin(), zero.rend());
    for (ll i = 0; i < zero.size(); i += 2)
        sum -= zero[i];

    if (sum >= m+1)
        cout << "Sasha\n";
    else
        cout << "Anna\n";
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
