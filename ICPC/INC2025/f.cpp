#include <bits/stdc++.h>
#include <pthread.h>
#include <string>
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
ll l,r;
string s;

void solve()
{
    double x;
    cin >> s >> l >> r;

    x = stod(s);
    if (x > r || x < l)
    {
        cout << -1 << endl;
        return;
    }

    ll pos = -1;
    for (ll i = 0; i < s.size(); ++i)
    {
        if (s[i] == '.')
        {
            pos = i;
            break;
        }
    }

    ll numerator, denominator = 1;
    if (pos != -1)
    {
        numerator = stoll((s.substr(0, pos) + s.substr(pos+1, s.size()-pos-1)));
        denominator = pow(10, (s.substr(pos+1, s.size()-pos-1)).size());
    }
    else
        numerator = stoll(s);

    while (__gcd(denominator, numerator) != 1)
    {
        ll div = __gcd(denominator, numerator);
        numerator /= div;
        denominator /= div;
    }

    if (numerator > denominator*r || numerator < denominator*l)
    {
        cout << -1 << endl;
        return;
    }

    vector<ll> ans(denominator, l);
    ll remaining = numerator - l*denominator;
    for (ll i = 0; i < denominator && remaining > 0; ++i)
    {
        ll add = min(r - l, remaining);
        ans[i] += add;
        remaining -= add;
    }

    cout << denominator << endl;
    for (ll a : ans)
        cout << a << " ";
    cout << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    //freopen("input.txt", "r", stdin);

    solve();

    return 0;
}
