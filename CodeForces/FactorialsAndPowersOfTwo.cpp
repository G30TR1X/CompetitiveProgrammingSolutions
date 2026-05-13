#include <bits/stdc++.h>
#include <climits>
using namespace std;

#define ll long long
#define ull unsigned long long

const int MOD = 998'244'353;
const ll array_size = 1e6 + 1;
ll t,n,m,k,x,y,z,u,v;
vector<ull> powerful;

void solve()
{
    cin >> n;
    ull ans = LONG_LONG_MAX;
    for (ll mask = 0; mask < (1ll << 12); mask++)
    {
        ull sum = 0, cnt = 0;
        for (ll i = 0; i < 12; ++i)
        {
            if (mask & (1ll << i))
                sum += powerful[i], cnt++;
        }

        if (sum > n)
            continue;

        cnt += __builtin_popcountll(n - sum);
        ans = min(ans, cnt);
    }
    
    cout << ans << '\n';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    vector<ull> fact(16);
    fact[0] = 1;
    for (ull i = 1; i < fact.size(); i++) {
        fact[i] = fact[i-1] * i;
    }

    for (ull i = 3; i < fact.size(); i++) {
        powerful.push_back(fact[i]);
    }
    
    cin >> t;
    while (t--)
        solve();

    return 0;
}
