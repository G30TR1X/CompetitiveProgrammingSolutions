#include <bits/stdc++.h>
using namespace std;

int main()
{
    for (int a = 1; a <= 1000; a++)
    {
        for (int b = 1; b <= 1000; b++)
        {
            for (int c = 1; c <= 1000; c++)
            {
                if ((a * a + b * b == c * c) && a + b + c == 1000)
                {
                    printf("a = %d, b = %d, c = %d\n", a, b, c);
                    printf("a * b * c = %d\n", a * b * c);
                }
            }
        }
    }
}
