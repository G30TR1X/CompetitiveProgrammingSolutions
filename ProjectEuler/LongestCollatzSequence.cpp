#include <bits/stdc++.h>
using namespace std;

long long int collatzSequence(long long int n)
{
    long long int sequence = 1;
    while (n != 1)
    {
        if (n % 2 == 0)
            n /= 2;
        else
            n = 3 * n + 1;

        sequence++;
    }

    return sequence;
}

int main()
{
    long long int n = 1, sequence = 0, highestNum = 0, highestSequence = 0;
    for (; n <= 1000000; n++)
    {
        sequence = collatzSequence(n);
        if (sequence > highestSequence)
        {
            highestSequence = sequence;
            highestNum = n;
        }
    }

    cout << highestNum << endl;
    cout << highestSequence << endl;
}
