#include <bits/stdc++.h>
using namespace std;

long long int sumSquare()
{
    long long int sum = 0;
    for (int i = 1; i <= 100; i++)
        sum += i * i;

    return sum;
}

long long int squareSum()
{
    long long int sum = 0;
    for (int i = 1; i <= 100; i++)
        sum += i;

    return sum*sum;
}

int main()
{
    long long int SumOfSquare = sumSquare();
    long long int SquareOfSum = squareSum();

    cout << SquareOfSum - SumOfSquare << endl;
    return 0;
}
