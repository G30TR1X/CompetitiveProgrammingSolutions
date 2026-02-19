#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int a = 1, b = 2;
    long long int sum = 0;
    while (b < 4000000 && a < 4000000)
    {
        if (b % 2 == 0)
            sum += b;

        long long int c = a + b;
        a = b;
        b = c;
    }
    cout << sum << endl;
    return 0;
}
