#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll t, n, k, a, b;
string s;

void solve()
{
    cin >> n >> t >> s;

    string answer = "";
    for (ll i = 0; i < n; ++i)
        answer += '.';

    for (ll i = 0; i < n; ++i)
    {
        if (s[i] == 'R')
        {
            ll loc = i + t;
            if (loc < n)
                ans[loc] = 'X';
        }
        else
        {
            ll loc = i - t;
            if (loc >= 0)
                ans[loc] = 'X';
        }
    }

    cout << answer;
}

int main()
{
    solve();

    return 0;
}