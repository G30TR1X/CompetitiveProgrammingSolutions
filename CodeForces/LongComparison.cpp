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
    ll x1,p1,x2,p2;
    cin >> x1 >> p1 >> x2 >> p2;
    ll subX1 = x1, subX2 = x2;
    ll digits1 = 0, digits2 = 0;
    while (subX1 > 0 || subX2 > 0)
    {
        if (subX1 > 0)
            ++digits1, subX1 /= 10;

        if (subX2 > 0)
            ++digits2, subX2 /= 10;
    }

    ll diff = abs(digits1 - digits2);

    if (digits1 > digits2)
    {
        while (p2 && diff)
            x2 *= 10, --p2, --diff;
    }
    else if (digits1 < digits2)
    {
        while (p1 && diff)
            x1 *= 10, --p1, --diff;
    }

    if (p1 > p2)
        cout << ">" << endl;
    else if (p1 < p2)
        cout << "<" << endl;
    else
    {
        if (x1 > x2)
            cout << ">" << endl;
        else if (x1 < x2)
            cout << "<" << endl;
        else
            cout << "=" << endl;
    }
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
