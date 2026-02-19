#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll p[n+1], s[n+1], org[n+1];
        for (ll i = 1; i <= n; i++)
            cin >> p[i];

        for (ll i = 1; i <= n; i++)
            cin >> s[i];

        for (ll i = n; i >= 1; i--)
            org[i] = lcm(p[i], s[i]);

        bool exist = true;
        if (org[1] != p[1]) exist = false;
        if (org[n] != s[n]) exist = false;

        for (ll i = 2; i <= n; i++)
        {
            if (__gcd(p[i-1], org[i]) != p[i])
                exist = false;
        }

        for (ll i = n-1; i >= 1; i--)
        {
            if (__gcd(s[i+1], org[i]) != s[i])
                exist = false;
        }

        if (exist)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}
