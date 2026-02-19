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
string a,b;

void solve()
{
    cin >> a >> b;

    ll ans = INT_MAX;
    ll nA = a.length();
    ll nB = b.length();
    for (ll i = 0; i < nA; i++)
    {
        for (ll j = 0; j < nB; j++)
        {
            if (a[i] == b[j])
            {
                ll length = 1;
                ll subI = i+1, subJ = j+1;
                while (subI < nA && subJ < nB && a[subI] == b[subJ])
                    length++, subI++, subJ++;

                ans = min(ans, (nA - length) + (nB - length));
            }
        }
    }

    cout << ((ans == INT_MAX) ? nA+nB : ans) << endl;
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
