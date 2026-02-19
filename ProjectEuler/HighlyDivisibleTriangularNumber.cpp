#include <bits/stdc++.h>
using namespace std;

int main()
{
    unsigned long long int n = 0, i = 1, divisor = 0;
    for (; divisor <= 500; i++)
    {
        n += i;
        divisor = 0;
        for (unsigned long long int j = 1; j * j <= n; j++)
        {
            if (n % j == 0)
                divisor += 2;
        }
    }

    cout << n << endl;

    return 0;
}
