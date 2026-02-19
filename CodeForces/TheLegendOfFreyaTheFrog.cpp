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
    cin >> x >> y >> k;
    //ll jumps = min(x/k, y/k)*2;
    //x -= jumps/2*k, y -= jumps/2*k;

    if (y >= x)
    {
        ll jumps = ceil((float) y/k);
        cout << jumps*2 << endl;
    }
    else 
    {
        ll jumps = ceil((float) x/k);
        cout << jumps*2-1 << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    freopen("input.txt", "r", stdin);

    cin >> t;
    while (t--)
        solve();

    return 0;
}
