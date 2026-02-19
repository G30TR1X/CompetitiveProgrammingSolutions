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
    string rot;
    ll curr = 50;
    ll ans = 0;
    while (cin >> rot)
    {
        ll digit = stoi(rot.substr(1));

        if (rot[0] == 'L')
            curr = (((curr - digit) % 100) + 100) % 100;
        else
            curr = (curr + digit) % 100;

        if (curr == 0)
            ++ans;
    }

    cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    freopen("input.txt", "r", stdin);

    solve();

    return 0;
}
