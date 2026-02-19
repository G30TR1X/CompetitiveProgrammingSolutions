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
ll t, n, m, k, x, y, z, u, v;
ll a[MAX_ARRAY_SIZE], b[MAX_ARRAY_SIZE];
string s;

void solve() {
    cin >> n;
    vs grid(n);
    for (ll i = 0; i < n; ++i)
        cin >> grid[i];

    ll ans = 0;
    for (ll i = 0; i < n / 2; ++i) {
        for (ll j = i; j < n - 1 - i; ++j) {
            ll temp = 0;
            temp += grid[i][j] - '0';
            temp += grid[j][n - 1 - i] - '0';
            temp += grid[n - 1 - j][i] - '0';
            temp += grid[n - 1 - i][n - 1 - j] - '0';

            if (temp != 4 && temp != 0)
                ans += min(temp, 4 - temp);
        }
    }

    cout << ans << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    //freopen("input.txt", "r", stdin);

    cin >> t;
    while (t--)
        solve();

    return 0;
}
