#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, one = 0;
        string a,b;
        cin >> n >> a >> b;
        bool exist = true;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == '0')
                continue;

            bool left = false, right = false;
            int l = i-1, r = i+1;

            while (l >= 0)
            {
                if (b[l] == '0')
                {
                    left = true;
                    b[l] = '1';
                    break;
                }
                l -= 2;
            }

            if (!left)
            {
                while (r < n)
                {
                    if (b[r] == '0')
                    {
                        right = true;
                        b[r] = '1';
                        break;
                    }
                    r += 2;
                }
            }

            if (left || right)
                continue;
            else
            {
                exist = false;
                break;
            }
        }

        if (exist)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
