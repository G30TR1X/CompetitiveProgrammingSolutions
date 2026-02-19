#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;

        n = (((((n*567/9)+7492)*235/47)-498)/10)%10;
        cout << ((n < 0) ? (n * -1) : n) << endl;
    }
}
