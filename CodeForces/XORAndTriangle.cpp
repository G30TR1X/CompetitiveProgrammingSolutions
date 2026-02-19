#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, ans = -1;
        cin >> n;
        if (n & (n-1) == 0) ans = -1;
        else if (n & (n+1) == 0) ans = -1;
        else {
            int bit = floor(log2(n)) + 1;
            int mask = 1 << (bit - 1);
            int y = mask - 1;
            ans = y;
        }
        cout << ans << endl;
    }
}
