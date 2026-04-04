#include <bits/stdc++.h>
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
ll t,n,m,k,x,y,z,u,v;
string s;

void solve()
{
    ll a[] = { 4, 8, 15, 16, 23, 42 };
    map<ll, pair<ll,ll>> mp;
    for (ll i = 0; i < 6; ++i)
    {
        for (ll j = i+1; j < 6; ++j)
        {
            mp[a[i] * a[j]] = { a[i], a[j] };
        }
    }

    ll num[4];
    for (ll i = 0; i < 2; ++i)
    {
        cout << "? " << i+1 << ' ' << i+2 << endl;
        cin >> num[i];
        if (num[i] == 0)
            return;
    }

    for (ll i = 2; i < 4; ++i)
    {
        cout << "? " << i+2 << ' ' << i+3 << endl;
        cin >> num[i];
        if (num[i] == 0)
            return;
    }

    vl ans(7);
    pair<ll,ll> p1 = mp[num[0]], p2 = mp[num[1]], p3 = mp[num[2]], p4 = mp[num[3]];
    if (p1.first == p2.first)
        ans[2] = p1.first;
    else if (p1.first == p2.second)
        ans[2] = p1.first;
    else if (p1.second == p2.first)
        ans[2] = p1.second;
    else if (p1.second == p2.second)
        ans[2] = p1.second;

    if (p3.first == p4.first)
        ans[5] = p3.first;
    else if (p3.first == p4.second)
        ans[5] = p3.first;
    else if (p3.second == p4.first)
        ans[5] = p3.second;
    else if (p3.second == p4.second)
        ans[5] = p3.second;

    ans[1] = num[0] / ans[2];
    ans[3] = num[1] / ans[2];
    ans[4] = num[2] / ans[5];
    ans[6] = num[3] / ans[5];
    
    cout << "! ";
    for (ll i = 1; i <= 6; ++i)
        cout << ans[i] << ' ';
    cout << endl;

    cin >> s;
    if (s == "0")
        return;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}
