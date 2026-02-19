#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n = 1;
    int found = 0;
    while (true)
    {
        for (long long int i = 2; i <= 20; i++)
        {
            if (n % i == 0)
            {
                if (i == 20)
                    found = 1;

                continue;
            }
            break;
        }

        if (found)
            break;
        
        n++;
    }

    cout << n << endl;

    return 0;
}
