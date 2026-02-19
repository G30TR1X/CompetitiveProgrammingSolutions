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
    cin >> n;
    ll c0 = 0, c1 = 0, c2 = 0;
    for (ll i = 0; i < n; ++i)
    {
        cin >> a[i];
        if (a[i] % 3 == 0)
            c0++;
        else if (a[i] % 3 == 1)
            c1++;
        else
            c2++;
    }
    
    ll ops = 0, balanced = n/3;
    if (c0 > balanced)
    {
        ll steps = c0 - balanced;
        if (c1 > balanced)
        {
            ops += (c1-balanced) + steps*2;
            c0 = c1 = balanced;
            c2 += (c1-balanced) + steps;
        }
        else if (c1 + steps > balanced)
        {
            ll difference = c1 + steps - balanced;
            ops += difference + (steps - difference)*2;
            c0 = c1 = balanced;
            c2 += steps - difference;
        }
        else
        {
            ops += steps;
            c0 = balanced;
            c1 += steps;
        }
    }

    if (c1 > balanced)
    {
        ll steps = c1 - balanced;
        if (c2 > balanced)
        {
            ops += (c2-balanced) + steps*2;
            c0 += (c2-balanced) + steps;
            c1 = c2 = balanced;
        }
        else if (c2 + steps > balanced)
        {
            ll difference = c2 + steps - balanced;
            ops += difference + (steps - difference)*2;
            c0 += steps - difference;
            c1 = c2 = balanced;
        }
        else
        {
            ops += steps;
            c1 = balanced;
            c2 += steps;
        }
    }

    if (c2 > balanced)
    {
        ll steps = c2 - balanced;
        if (c0 > balanced)
        {
            ops += (c0-balanced) + steps*2;
            c1 += (c0-balanced) + steps;
            c0 = c2 = balanced;
        }
        else if (c0 + steps > balanced)
        {
            ll difference = c0 + steps - balanced;
            ops += difference + (steps - difference)*2;
            c1 += steps - difference;
            c0 = c2 = balanced;
        }
        else
        {
            ops += steps;
            c2 = balanced;
            c0 += steps;
        }
    }

    cout << ops << endl;
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
