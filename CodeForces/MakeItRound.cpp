#include <bits/stdc++.h>
#include <pthread.h>
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
ll p2[19], p5[19];
string s;

void solve()
{
    cin >> n >> m;
    ll temp = n, c2 = 0, c5 = 0;
    while (temp && temp % 2 == 0)
        c2++, temp /= 2;

    temp = n;
    while (temp && temp % 5 == 0)
        c5++, temp /= 5;

    for (ll i = 18; i >= 0; --i)
    {
        ll extra2 = max(0ll, i - c2);
        ll extra5 = max(0ll, i - c5);

        ll need = p2[extra2] * p5[extra5];
        if (need <= m)
        {
            ll largest = m - (m % need);
            cout << largest * n << '\n';
            return;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    //freopen("input.txt", "r", stdin);

    p2[0] = p5[0] = 1;
    for (ll i = 1; i < 19; ++i)
    {
        p2[i] = p2[i-1] * 2;
        p5[i] = p5[i-1] * 5;
    }

    cin >> t;
    while (t--)
        solve();

    return 0;
}
