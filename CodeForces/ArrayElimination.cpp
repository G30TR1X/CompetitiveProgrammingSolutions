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
ll a[MAX_ARRAY_SIZE];
string s;

void getBits(ll num, vl &bits)
{
    ll i = 0;
    while (i <= 29)
    {
        if (num & (1ll << i))
            bits[i]++;
        ++i;
    }
}

void solve()
{
    cin >> n;
    vl bits(30,0);
    for (ll i = 0; i < n; ++i)
    {
        cin >> a[i];
        getBits(a[i], bits);
    }

    vl ans;
    ans.push_back(1);
    for (ll i = 2; i <= n; ++i)
    {
        bool flag = true;
        for (ll j = 0; j <= 29; ++j)
        {
             if (bits[j] % i != 0)
             {
                 flag = false;
                 break;
             }
        }

        if (flag)
            ans.push_back(i);
    }

    for (ll a : ans)
        cout << a << " ";
    cout << '\n';
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
