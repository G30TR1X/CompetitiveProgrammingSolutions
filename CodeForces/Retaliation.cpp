#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        long long int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];

        long long int y = (a[1] - 2*a[0]) / (-2 * n + (n-1));
        long long int x = a[0] - n*y;

        if (x < 0 || y < 0)
        {
            cout << "NO" << endl;
            continue;
        }

        int flag = 0;
        for (int i = 1; i <= n; i++)
        {
            if (a[i-1] != x*i + y*(n-i+1))
            {
                flag = 1;
                break;
            }
        }

        if (flag)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
}
