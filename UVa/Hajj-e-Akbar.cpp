#include <bits/stdc++.h>
using namespace std;

int main()
{
    string input;
    int i = 1;
    while (cin >> input, input != "*")
    {
        string output = "Hajj-e-Asghar\n";
        if (input == "Hajj") output = "Hajj-e-Akbar\n";
        cout << "Case " << i << ": " << output;
        i++;
    }
}
