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
vvl graph(MAX_ARRAY_SIZE);
vb vis(MAX_ARRAY_SIZE);

void solve()
{
    cin >> n;
    ll index = -1;
    ll a[MAX_ARRAY_SIZE];
    for (ll i = 0; i < n; ++i)
    {
        cin >> a[i];
        if (a[i] == n)
            index = i;
    }

    ll left = index, right = index, num = n-1;
    for (ll i = 0; i < n; ++i)
    {
        if (num == 0)
            break;

        if (left-1 >= 0 && a[left-1] == num)
            --left, --num;
        else if (right+1 < n && a[right+1] == num)
            ++right, --num;
        else
        {
            cout << "NO" << endl;
            return;
        }
    }

    cout << "YES" << endl;
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
