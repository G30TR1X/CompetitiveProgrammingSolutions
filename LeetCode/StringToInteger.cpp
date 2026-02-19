#include <bits/stdc++.h>
using namespace std;

int myAtoi(string s) {
    int negatives = 1;
    long long int conversion = 0;
    int index = 0;

    while (s[index] == ' ')
    {
        index++;
    }

    if (s[index] == '-')
    {
        negatives = -1;
        index++;
    }
    else if (s[index] == '+')
    {
        index++;
    }

    while ((s[index] >= '0' && s[index] <= '9'))
    {
        int digit = s[index] - '0';
        conversion += digit;

        if (conversion > INT_MAX && negatives == 1)
        {
            return INT_MIN;
        }
        else if (conversion > INT_MAX)
        {
            return INT_MAX;
        }

        conversion *= 10;
        index++;

    }

    if (conversion > 0)
    {
        conversion /= 10;
    }

    return conversion * negatives;
}

int main()
{
    string s = "2147483648";
    cout << myAtoi(s) << endl;

    return 0;
}