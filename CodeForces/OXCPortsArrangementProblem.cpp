#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define vi vector<int>
#define vs vector<string>
#define vc vector<char>
#define vb vector<bool>
#define vvi vector<vector<int>>
#define vvb vector<vector<bool>>

const int MOD = 1e9 + 7;
const int MAX_ARRAY_SIZE = 1e6 + 1;

void solve()
{
    vvi oxc(256, vi(2048,-1)), spine(32, vi(32));
    int n,s,l,m,k,p,q,gA,lA,gB,lB;
    cin >> n >> s >> l >> m >> k >> p;
    int r = n*(s/p)*k;
    for (int _ = 0; _ < 5; ++_)
    {
        cin >> q;
        for (int i = 0; i < q; ++i)
            cin >> gA>> lA >> gB >> lB;


        // OUTPUT
        for (int i = 0; i < m; ++i)
        {
            for (ll j = 0; j < r; ++j)
                cout << oxc[i][j] << " ";
            cout << endl;
        }

        for (ll i = 0; i < q; ++i)
        {
            // Output SpineA -> Link -> OXCM -> Link -> SpineB
        }
    }
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
