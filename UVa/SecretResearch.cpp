#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    char result;
    cin >> n;
    while (n--)
    {
        string code;
        cin >> code;
        if (code == "1" || code == "8" || code == "78") result = '+';
        else if (code[code.size()-1] == '5' && code[code.size()-2] == '3') result = '-';
        else if (code[0] == '9' && code[code.size()-1] == '4') result  = '*';
        else if (code[0] == '1' && code[1] == '9' && code[2] == '0') result = '?';

        cout << result << endl;
    }
}
