#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int x)
{
    if (x < 2)
        return false;

    for (int i = 2; i*i <= x; i++)
    {
        if (x % i == 0)
            return false;
    }

    return true;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, k;
        cin >> x >> k;

        if (x >= 2 && k >= 2)
            cout << "NO\n";
        else if (k == 1)
            cout << (isPrime(x) ? "YES\n" : "NO\n");
        else
            cout << (k == 2 ? "YES\n" : "NO\n");
    }
}
