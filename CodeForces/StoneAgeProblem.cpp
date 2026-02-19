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
string s;

void solve()
{
    ll q, sum = 0;
    cin >> n >> q;
    vl a(n);
    for (ll i = 0; i < n; ++i)
    {
        cin >> a[i];
        sum += a[i];
    }

    set<ll> seen;
    bool changed = false;
    ll elem = -1;
    for (ll i = 0; i < q; ++i)
    {
        cin >> t;

        if (t == 1)
        {
            cin >> y >> x;
            
            if (changed && seen.find(y) == seen.end())
            {
                a[y-1] = elem;
                seen.insert(y);
            }
            sum -= a[y-1];
            sum += x;
            a[y-1] = x;
        }
        else
        {
            cin >> x;
            sum = x*n;
            seen.clear();
            changed = true;
            elem = x;
        }

        cout << sum << '\n';
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    //freopen("input.txt", "r", stdin);

    solve();

    return 0;
}
