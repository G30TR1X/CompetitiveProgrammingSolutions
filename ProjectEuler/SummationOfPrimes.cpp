#include <bits/stdc++.h>
using namespace std;

bool isPrime(long long int num)
{
    if (num < 2)
        return false;

    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
            return false;
    }

    return true;
}

int main()
{
    long long int n = 0, sum = 0;
    while (n < 2000000)
    {
        n++;

        if (isPrime(n))
            sum += n;
    }

    cout << sum << endl;
    return 0;
}
