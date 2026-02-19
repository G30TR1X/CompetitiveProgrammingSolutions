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

bool numCheck(ll n)
{
    vl num(10,0);
    ll subN = n;
    while (subN)
    {
        num[subN%10] = 1;
        subN /= 10;
    }

    for (ll i = 1; i < 10; ++i)
    {
        if (num[i])
        {
            if (n % i != 0)
                return true;
        }
    }
    return false;
}

void solve()
{
    cin >> n;

    while (numCheck(n))
        ++n;

    cout << n << endl;
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
