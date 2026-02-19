#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long

const int MOD = 1e9 + 7;
const ll array_size = 1e6 + 1;
ll t, n, m, k, x, y, z, u, v;
ll a[array_size], b[array_size];
string s;

void solve()
{
    cin >> s;
    string subsqnc[] = {"00", "25", "50", "75"};

    ll ans = 100;
    for (string sub : subsqnc)
    {
        ll index = s.size() - 1, curr = 0;
        while (index >= 0 && s[index] != sub[1])
        {
            --index;
            ++curr;
        }

        if (index < 0)
        {
            curr = 100;
            ans = min(curr, ans);
            continue;
        }

        --index;
        while (index >= 0 && s[index] != sub[0])
        {
            --index;
            ++curr;
        }

        if (index < 0)
        {
            curr = 100;
            ans = min(curr, ans);
            continue;
        }

        ans = min(ans, curr);
    }

    cout << ans << endl;
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
