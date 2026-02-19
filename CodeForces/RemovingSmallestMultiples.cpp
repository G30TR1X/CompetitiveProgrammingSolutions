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
ll t;

void solve()
{
    ll n;
    string s;
    cin >> n >> s;
    ll ans = 0;
    vl seen(n+1, 0);
    for (ll i = 1; i <= n; ++i)
    {
        if (s[i-1] == '1')
            continue;

        for (ll j = i-1; j < n; j += i)
        {
            if (s[j] == '0')
            {
                if (seen[j+1])
                    continue;

                ans += i, seen[j+1] = 1;
            }
            else
                break;
        }
    }

    cout << ans << '\n';
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
