#include <bits/stdc++.h>
using namespace std;

#define ll long long

const int MOD = 1e9 + 7;
const int MAX_ARR_SIZE = 1e6 + 10;
ll t, n, k, a, b, p;
string s;

vector<ll> c(MAX_ARR_SIZE), a(MAX_ARR_SIZE), s(MAX_ARR_SIZE), t(MAX_ARR_SIZE), b(MAX_ARR_SIZE), baris(MAX_ARR_SIZE);
vector<ll> ans(n + 1);

void solve()
{

    cin >> n >> p;
    set<ll> detik;
    for (int i = 0; i < n; ++i)
    {
        cin >> c[i] >> a[i] >> s[i] >> t[i] >> b[i];
        baris[i] = a[i] + s[i] + t[i];
        detik.insert(baris[i]);
    }

    ll car = 0, menit = *detik.begin();
    while (car < p)
    {
        for (ll i = 0; i < n; ++i)
        {
            if (menit)
        }
    }
}

int main()
{
    solve();

    return 0;
}