#include <bits/stdc++.h>
using namespace std;

int main()
{
    int highest = INT_MIN;

    for (int i = 999; i > 99; i--)
    {
        for (int j = i; j > 99; j--)
        {
            int k = i * j;
            string s = to_string(k);
            if (s == string(s.rbegin(), s.rend()))
                highest = max(highest, k);
        }
    }

    cout << highest << endl;
}
