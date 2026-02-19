#include <bits/stdc++.h>
#include <climits>
using namespace std;

#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, minDigit = INT_MAX;
        cin >> n;
        while (n != 0)
        {
            minDigit = min(minDigit, n % 10);
            n /= 10;
        }
        cout << minDigit << endl;
    }
}
