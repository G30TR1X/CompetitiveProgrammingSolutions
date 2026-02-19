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
        vector<long long int> ipt;
        vector<long long int> bit(30, 0);

        for (long long int i = 0; i < n; i++)
        {
            int input;
            cin >> input;
            ipt.push_back(input);
            for (int j = 0; j < 30; j++)
            {
                bit[j] += ((ipt[i] >> j) & 1);
            }
        }

        long long int ans = 0;
        for (long long int i = 0; i < n; i++)
        {
            long long int currTotal = 0;
            for (int j = 0; j < 30; j++)
            {
                if (ipt[i] >> j & 1)
                    currTotal += (1 << j) * (n - bit[j]);
                else
                    currTotal += (1 << j) * bit[j];
            }
            ans = max(ans, currTotal);
        }

        cout << ans << endl;
    }
}
