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
    cin >> n >> x >> y >> u >> v;
    ll layerX1, LayerY1, LayerX2, LayerY2;
    layerX1 = x > n/2 ? n-x+1 : x;
    LayerY1 = y > n/2 ? n-y+1 : y;
    LayerX2 = u > n/2 ? n-u+1 : u;
    LayerY2 = v > n/2 ? n-v+1 : v;
    ll layer1 = min(layerX1, LayerY1);
    ll layer2 = min(LayerX2, LayerY2);
    cout << (abs(layer1-layer2)) << endl;
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
