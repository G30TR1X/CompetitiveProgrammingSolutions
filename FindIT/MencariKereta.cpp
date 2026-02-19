#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n, price;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int input;
        cin >> input;

        if (i == 0)
            price = input * abs(input-n);
    }

    cout << price << endl;
    
    return 0;
}
