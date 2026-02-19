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

void solve()
{
    string rot;
    ll curr = 50;
    ll ans = 0;
    while (cin >> rot)
    {
        ll digit = stoi(rot.substr(1));

        if (rot[0] == 'L')
        {
            ll left = curr - digit;
            curr = ((left % 100) + 100) % 100;
            if (left < -100)
                ans += (-left)/100 - (curr == 0);
            else if (left < 0)
                ans += 1 - (curr == 0);
        }
        else
        {
            ll right = curr + digit;
            curr = right % 100;
            if (right > 100)
                ans += right/100 - (curr == 0);

        }

        if (curr == 0)
            ++ans;
    }

    cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    freopen("input.txt", "r", stdin);

    solve();

    return 0;
}
