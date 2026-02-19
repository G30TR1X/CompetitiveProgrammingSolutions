#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,x,y;
        cin >> n >> x >> y;

        if (x == y) cout << 0 << " " << 0 << endl;
        else if (x % y == 0) cout << 0 << " " << n/x << endl;
        else if (y % x == 0) cout << n/y << " " << 0 << endl;
        else {
            int min = n/(x*y);
            cout << n/x - min << " " << n/y - min << endl;
        }
    }
}
