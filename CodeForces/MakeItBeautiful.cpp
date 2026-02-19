#include <bits/stdc++.h>
using namespace std;

#define intll long long
 
int main()
{
    intll t;
    cin >> t;
    while (t--)
    {
        intll n,k, ans = 0;
        cin >> n >> k;

        vector<intll> arr(n);
        for (intll i = 0; i < n; i++)
        {
            cin >> arr[i];
            ans += __builtin_popcountll(arr[i]);
        }

        for (intll i = 0; i < 63; i++)
        {
            intll binarybit = 1ll << i;
            for (intll num : arr)
            {
                if (!(num & binarybit) && k >= binarybit)
                    ans++, k -= binarybit;
            }
        }

        cout << ans << endl;
    }

    return 0;
}
