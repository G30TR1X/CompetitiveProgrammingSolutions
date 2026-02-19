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
    string z, s;
    cin >> s >> z;
    if (z.size() > s.size())
    {
        cout << "NO" << endl;
        return;
    }

    unordered_map<char, ll> counter;
    for (ll i = 0; i < z.size(); ++i)
        ++counter[z[i]];

    for (ll i = s.size()-1; i >= 0; --i)
    {
        if (counter[s[i]] > 0)
            --counter[s[i]];
        else
            s[i] = '.';
    }

    ll index = 0;
    for (ll i = 0; i < s.size(); ++i)
    {
        if (s[i] == z[index])
            ++index;
    }

    if (index == z.size())
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

/*
    ll j;
    vector<ll> idx;
    for (ll i = 0; i < z.size(); ++i)
    {
        ll count = counter[z[i]];
        j = s.size()-1;
        for (; j >= 0; --j)
        {
            if (s[j] == z[i])
            {
                --count;
                if (count == 0)
                    break;
            }
        }

        if (j != -1)
        {
            idx.push_back(j);
            --counter[z[i]];
        }
        else
            break;
    }

    if (idx.size() == z.size())
    {
        ll i = 1;
        for (; i < idx.size(); ++i)
        {
            if (idx[i] < idx[i-1])
                break;
        }

        if (i == idx.size())
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    else
        cout << "NO" << endl;
*/
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> t;
    while (t--)
        solve();

    return 0;
}
