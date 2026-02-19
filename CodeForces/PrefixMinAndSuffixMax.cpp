#include <bits/stdc++.h>
#include <climits>
using namespace std;

#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> v(n+1), pre(n+1, INT_MAX), suf(n+2, INT_MIN);
        for (int i = 1; i <= n; i++)
        {
            cin >> v[i];
            pre[i] = min(pre[i-1], v[i]);
        }

        for (int i = n; i >= 1; i--)
        {
            suf[i] = max(suf[i+1], v[i]);
        }

        for (int i = 1; i <= n; i++)
            cout << (v[i] == pre[i] || v[i] == suf[i] ? 1 : 0);

        cout << endl;
    }
}
