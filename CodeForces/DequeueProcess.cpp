#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long

const ll array_size = 1e6 + 1;
ll t,n,m,k,x,y,z,u,v;
ll a[array_size],b[array_size],c[array_size];
string s;

void solve()
{
    cin >> n;
    for (ll i = 0; i < n; i++)
        cin >> a[i];

    ll l = 0, r = n-1, cnt = 0;
    string result = "";
    while (l <= r)
    {
        if (cnt % 4 < 2)
        {
            if (a[r] > a[l])
            {
                result += "R";
                r--;
            }
            else
            {
                result += "L";
                l++;;
            }
        }
        else 
        {
            if (a[r] > a[l])
            {
                result += "L";
                l++;
            }
            else
            {
                result += "R";
                r--;
            }
        }
        cnt++;
    }

    cout << result << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> t;
    while (t--)
        solve();

    return 0;
}
