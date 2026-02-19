#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int maximum = INT_MIN, minimum = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            int input;
            cin >> input;
            maximum = max(maximum, input);
            minimum = min(minimum, input);
        }
        cout << maximum - minimum << endl;
    }
}
