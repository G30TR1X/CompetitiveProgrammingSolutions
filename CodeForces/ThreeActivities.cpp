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
ll a[MAX_ARRAY_SIZE], b[MAX_ARRAY_SIZE], c[MAX_ARRAY_SIZE];
string s;

void solve()
{
    cin >> n;
    for (ll i = 0; i < n; ++i)
        cin >> a[i];
    for (ll i = 0; i < n; ++i)
        cin >> b[i];
    for (ll i = 0; i < n; ++i)
        cin >> c[i];

    ll ans1 = 0, ans2 = 0, ans3 = 0, ans4 = 0, ans5 = 0, ans6 = 0, highest = 0;
    ll day1 = 0, day2 = 0;
    for (ll i = 0; i < n; ++i)
    {
        if (a[i] > highest)
            highest = a[i], day1 = i;
    }

    ans2 = ans1 = highest;
    highest = 0;
    for (ll i = 0; i < n; ++i)
    {
        if (i == day1)
            continue;

        if (b[i] > highest)
            highest = b[i], day2 = i;
    }
    
    ans1 += highest;
    highest = 0;
    for (ll i = 0; i < n; ++i)
    {
        if (i == day1 || i == day2)
            continue;

        if (c[i] > highest)
            highest = c[i];
    }

    ans1 += highest;
    highest = 0;
    for (ll i = 0; i < n; ++i)
    {
        if (i == day1)
            continue;

        if (c[i] > highest)
            highest = c[i], day2 = i;
    }
    
    ans2 += highest;
    highest = 0;
    for (ll i = 0; i < n; ++i)
    {
        if (i == day1 || i == day2)
            continue;

        if (b[i] > highest)
            highest = b[i];
    }
    ans2 += highest;
    
    // Second Iteration
    highest = 0;
    for (ll i = 0; i < n; ++i)
    {
        if (b[i] > highest)
            highest = b[i], day1 = i;
    }

    ans3 = ans4 = highest;
    highest = 0;
    for (ll i = 0; i < n; ++i)
    {
        if (i == day1)
            continue;

        if (a[i] > highest)
            highest = a[i], day2 = i;
    }
    
    ans3 += highest;
    highest = 0;
    for (ll i = 0; i < n; ++i)
    {
        if (i == day1 || i == day2)
            continue;

        if (c[i] > highest)
            highest = c[i];
    }

    ans3 += highest;
    highest = 0;
    for (ll i = 0; i < n; ++i)
    {
        if (i == day1)
            continue;

        if (c[i] > highest)
            highest = c[i], day2 = i;
    }
    
    ans4 += highest;
    highest = 0;
    for (ll i = 0; i < n; ++i)
    {
        if (i == day1 || i == day2)
            continue;

        if (a[i] > highest)
            highest = a[i];
    }
    ans4 += highest;
    
    // Last Iteration
    highest = 0;
    for (ll i = 0; i < n; ++i)
    {
        if (c[i] > highest)
            highest = c[i], day1 = i;
    }

    ans5 = ans6 = highest;
    highest = 0;
    for (ll i = 0; i < n; ++i)
    {
        if (i == day1)
            continue;

        if (b[i] > highest)
            highest = b[i], day2 = i;
    }
    
    ans5 += highest;
    highest = 0;
    for (ll i = 0; i < n; ++i)
    {
        if (i == day1 || i == day2)
            continue;

        if (a[i] > highest)
            highest = a[i];
    }

    ans5 += highest;
    highest = 0;
    for (ll i = 0; i < n; ++i)
    {
        if (i == day1)
            continue;

        if (a[i] > highest)
            highest = a[i], day2 = i;
    }
    
    ans6 += highest;
    highest = 0;
    for (ll i = 0; i < n; ++i)
    {
        if (i == day1 || i == day2)
            continue;

        if (b[i] > highest)
            highest = b[i];
    }
    ans6 += highest;
    
    cout << max(ans1, max(ans2, max(ans3, max(ans4, max(ans5, ans6))))) << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    //freopen("input.txt", "r", stdin);

    cin >> t;
    while (t--)
        solve();

    return 0;
}
