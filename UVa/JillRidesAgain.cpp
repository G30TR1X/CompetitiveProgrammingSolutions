#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, b = 1;
    cin >> t;
    while (t--)
    {
        int r, sum = 0, ans = 0, start = 1, finalS = 0xffff, finalE;
        cin >> r;

        for (int i = 2; i <= r; i++)
        {
            int input;
            cin >> input;
            sum += input;

            if (sum < 0) 
            {
                sum = 0;
                start = i;
            }

            if (sum >= ans)
            {
                if (sum > ans || (sum == ans && (i - start) > (finalE - finalS)))
                {
                    finalS = start;
                    finalE = i;
                }
                ans = sum;
            }
        }

        if (ans <= 0) printf("Route %d has no nice parts\n", b);
        else printf("The nicest part of route %d is between stops %d and %d\n", b, finalS, finalE);
        
        b++;
    }

    return 0;
}
