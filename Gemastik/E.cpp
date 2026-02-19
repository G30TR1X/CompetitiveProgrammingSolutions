#include <bits/stdc++.h>
using namespace std;

#define ll long long

const int MAX_ARRAY_SIZE = 1e6 + 10;

ll t, n, k, a, b;
string s;
vector<ll> mobil(MAX_ARRAY_SIZE), naik(MAX_ARRAY_SIZE), jalan(MAX_ARRAY_SIZE), turun(MAX_ARRAY_SIZE), balik(MAX_ARRAY_SIZE);

bool checkCars(ll mid)
{
    ll cars = 0;
    for (ll i = 0; i < n; ++i)
    {
        ll time = mid;
        ll backForth = naik[i] + jalan[i] + turun[i] + balik[i];
        ll leftOver = naik[i] + jalan[i] + turun[i];

        ll travel = time / backForth;
        cars += (travel * mobil[i]);
        time = time % backForth;

        if (time >= leftOver)
            cars += mobil[i];
    }

    return cars >= k;
}

void solve()
{
    freopen("input.txt", "r", stdin);

    cin >> n >> k;
    for (ll i = 0; i < n; ++i)
        cin >> mobil[i] >> naik[i] >> jalan[i] >> turun[i] >> balik[i];

    ll l = 1, r = 1000000000000, minimumTime = 1;
    while (l <= r)
    {
        ll mid = l + (r-l)/2;

        if (checkCars(mid))
            r = mid-1, minimumTime = mid;
        else
            l = mid + 1;
    }

    cout << minimumTime << endl;
}

int main()
{
    solve();

    return 0;
}
