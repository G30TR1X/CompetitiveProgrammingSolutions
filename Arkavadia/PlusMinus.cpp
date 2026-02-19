#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin >> n >> k;

    if (k < 0)
    {
        k *= -1;
        n -= 2;
    }

    if (n % 2 == k % 2 && n >= k)
        cout << "YES\n";
    else
        cout << "NO\n";
}
