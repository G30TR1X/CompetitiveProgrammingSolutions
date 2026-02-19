#include <bits/stdc++.h>
using namespace std;

int main()
{
    unsigned long long int n, k, minStep = LONG_MAX;
    cin >> n >> k;
    for (unsigned long long int i=0; i < n; i++)
    {
        unsigned long long int input, temp = k, m=0;
        cin >> input;
        while (temp > input)
        {
            temp /= 2;
            m++;
        }
        m += (input - temp);
        minStep = min(m, minStep);
    }
    cout << minStep << endl;
}
