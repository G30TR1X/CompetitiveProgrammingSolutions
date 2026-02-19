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
const int MAX_ARRAY_SIZE = 1e6 + 5;
ll t,n,m,k,x,y,z,u,v;
vl snow(MAX_ARRAY_SIZE,0);
string s;

void solve()
{
    cin >> n;
    cout << ((snow[n] == 1) ? "YES\n" : "NO\n");
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    //freopen("input.txt", "r", stdin);

    for (ll i = 2; i < MAX_ARRAY_SIZE; ++i)
        for (ll j = i*(i+1), k = i*i; j < MAX_ARRAY_SIZE-1; k *= i, j += k)
            snow[j+1] = 1;

    cin >> t;
    while (t--)
        solve();

    return 0;
}
