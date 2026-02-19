#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        ll weather[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> weather[i];
        }

        ll hiked = 0;
        for (ll i = 0; i < n; i++)
        {
            bool badWeather = false;
            ll j;

            if (i + k - 1 >= n)
                break;

            for (j = i; j <= i + k - 1; j++)
            {
                if (weather[j] == 1)
                {
                    badWeather = true;
                    break;
                }
            }

            if (!badWeather)
            {
                hiked++;
            }

            i = j;
        }

        cout << hiked << endl;
    }
}
