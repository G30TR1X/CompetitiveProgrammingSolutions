#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int number;
        string word;
        cin >> word;
        
        if (word.size() > 3) number = 3;
        else 
        {
            if (word[0] == 'o') number = 1;
            else if (word[0] == 't') number = 2;
            else
            {
                if (word[0] == 'n') number = 1;
                else if (word[0] == 'o') number = 2;
                else
                {
                    if (word[0] == 'e') number = 1;
                    else number = 2;
                }
            }
        }

        cout << number << endl;
    }
}
