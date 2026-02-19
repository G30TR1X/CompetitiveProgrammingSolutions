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
    cin >> n >> s;
    ll l = 0, r = n-1, cnt = 0;
    while (l < r)
    {
        if (s[l] == '1')
        {
            while (l < r && s[r] != '0')
                --r;

            if (s[r] == '0' && l < r)
                ++cnt;
        }
        else if (s[r] == '0')
        {
            while (l < r && s[l] != '1')
                ++l;

            if (s[l] == '1' && l < r)
                ++cnt;
        }

        ++l, --r;
    }

    cout << cnt << endl;
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
