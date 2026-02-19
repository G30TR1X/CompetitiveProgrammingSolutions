#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,x;
        int sum = 0;
        bool odd = false;
        cin >> n >> x;

        if (n % 2 == 1) odd = true;

        for (int i = 0; i < n; i++)
        {
            int input;
            cin >> input;
            sum += input;
        }

        if (odd)
        {
            if ((sum/n) % x == 0) cout << "YES";
            else cout << "NO";
        }
        else {
            while (sum > x) sum /= 2;
            if (sum == x) cout << "YES";
            else cout << "NO";
        }
        
        cout << endl;
    }
}
