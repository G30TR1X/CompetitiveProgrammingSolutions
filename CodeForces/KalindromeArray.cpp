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
    cin >> n;
    for (ll i = 0; i < n; ++i)
        cin >> a[i];

    ll l = 0, r = n-1;
    while (a[l] == a[r] && l < r)
        ++l, --r;

    ll nL = a[l], nR = a[r];
    ll subL = l, subR = r;
    bool left = false, right = false;
    while (subL < subR)
    {
        if (a[subL] == a[subR])
        {
            ++subL, --subR;
            continue;
        }

        if (a[subL] == nL)
            ++subL;
        else if (a[subR] == nL)
            --subR;
        else
        {
            left = true;
            break;
        }
    }

    subL = l, subR = r;
    while (subL < subR)
    {
        if (a[subL] == a[subR])
        {
            ++subL, --subR;
            continue;
        }

        if (a[subL] == nR)
            ++subL;
        else if (a[subR] == nR)
            --subR;
        else
        {
            right = true;
            break;
        }
    }

    if (left && right)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
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
