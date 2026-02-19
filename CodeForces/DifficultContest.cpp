#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long

void solve()
{
    string s;
    cin >> s;
    unordered_map<char, ll> hash;
    for (ll i = 0; i < s.length(); i++)
        hash[s[i]]++;

    string ans = "";
    for (; hash['T'] > 0; hash['T']--)
        ans += 'T';

    for (auto x : hash)
    {
        for (ll i = 0; i < x.second; i++)
            ans += x.first;
    }

    cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}
