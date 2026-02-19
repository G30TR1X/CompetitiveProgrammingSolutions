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
    char c;
    long long int n = 0, i = 0;
    while (i != 10001)
    {
        n++;

        if (isPrime(n))
            i++;
    }

    cout << n << endl;
    return 0;
}
