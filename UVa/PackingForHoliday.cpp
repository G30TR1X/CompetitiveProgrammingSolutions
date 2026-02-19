#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, i = 1;
    cin >> t;
    while (t--)
    {
        int length, width, height;
        string result = "good";
        cin >> length >> width >> height;
        if (length > 20 || width > 20 || height > 20) result = "bad";
        cout << "Case " << i << ": " << result << endl;
        i++;
    }
}
