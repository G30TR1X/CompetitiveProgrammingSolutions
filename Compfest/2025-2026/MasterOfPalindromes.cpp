#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define vl vector<ll>

const int MOD = 1e9 + 7;
const int MAX_ARRAY_SIZE = 1e6 + 1;
ll t, n, m, k, x, y, z, u, v;
ll a[MAX_ARRAY_SIZE], b[MAX_ARRAY_SIZE];
string s;

void solve()
{
    cin >> n >> s;
    ll l = 0, r = n - 1, partition = 0, size = 0;
    string sub1 = "", sub2 = "";

    while (l <= r)
    {
        sub1 = sub1 + s[l];
        sub2 = s[r] + sub2;

        if (l == r && sub1 == sub2)
            ++partition, ++size;
        else if (sub1 == sub2)
            size += sub1.size() + sub2.size(), partition += 2, sub1 = sub2 = "";

        ++l, --r;
    }

    if (size == n)
        cout << partition << endl;
    else
        cout << 0 << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}
