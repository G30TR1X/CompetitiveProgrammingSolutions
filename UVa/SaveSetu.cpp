#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int t, sum = 0;
    cin >> t;
    while (t--)
    {
        string key;
        long long int amount;
        cin >> key;
        if (key == "donate")
        {
            cin >> amount;
            sum += amount;
        }
        else if (key == "report") cout << sum << endl;
    } 
}
