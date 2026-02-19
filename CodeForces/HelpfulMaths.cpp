#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long

const int MOD = 1e9 + 7;
const ll array_size = 1e6 + 1;
ll t,n,m,k,x,y,z,u,v;
ll a[array_size];
string s;

void solve()
{
    cin >> s;

    vector<ll> num;
    for (ll i = 0; i < s.size(); i += 2)
        num.push_back(s[i] - '0');

    sort(num.begin(), num.end());
    
    string ans = "";
    for (auto x : num)
        ans += to_string(x) + '+';

    cout << ans.substr(0, ans.size() - 1) << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}
