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

    ll contrast = 0;
    for (ll i = 0; i < n-1; ++i)
    {
        ll c = abs(a[i] - a[i+1]);
        contrast += c;
    }

    if (contrast == 0)
    {
        cout << 1 << '\n';
        return;
    }

    vl ans;
    ans.push_back(a[0]);
    ans.push_back(a[1]);
    for (ll i = 2; i < n; ++i)
    {
        ll currSize = ans.size();
        ll currContrast = ans[currSize-2] - ans[currSize-1];
        ll ogContrast = ans[currSize-1] - a[i];

        if (currContrast > 0)
        {
            if (ogContrast > 0)
                ans[currSize-1] = a[i];
            else if (ogContrast < 0)
                ans.push_back(a[i]);
        }
        else
        {
            if (ogContrast < 0)
                ans[currSize-1] = a[i];
            else if (ogContrast > 0)
                ans.push_back(a[i]);
        }
    }

    ll ansSize = ans.size();
    if (ans[0] == ans[1])
        --ansSize;

    cout << ansSize << endl;
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
