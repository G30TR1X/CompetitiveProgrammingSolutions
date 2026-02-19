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
    for (ll i = 1; i <= n; ++i)
        cin >> a[i];

    ll ans[MAX_ARRAY_SIZE] = {0};
    for (ll i = 1; i <= n; ++i)
    {
        if (ans[i] != 0)
            continue;

        ll curr = i;
        unordered_set<ll> manager;
        while (a[curr] != -1)
        {
            manager.insert(curr);
            curr = a[curr];
        }
        manager.insert(curr);

        for (ll m : manager)
            ans[m] = manager.size();
    }

    ll answer = 0;
    for (ll i = 1; i <= n; ++i)
        answer = max(answer, ans[i]);

    cout << answer << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}
