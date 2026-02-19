#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<string> word(n);

    for (int i = 0; i < n; i++)
    {
        cin >> word[i];
    }

    for (int i = 0; i < n; i++)
    {
        string translated = "";
        for (int j = 0; j < word[i].size(); j++)
        {
            if (word[i][j] == 'c')
            {
                if (word[i][j+1] == 'h')
                {
                    translated += 'c';
                    j++;
                }
                else if (word[i][j+1] == 'e' || word[i][j+1] == 'i' || word[i][j+1] == 'y') translated += 's';
                else if ((word[i][j+1] == 'a' || word[i][j+1] == 'o' || word[i][j+1] == 'u') || (word[i][j+1] != 'h' || word[i][j+1] != 'y') || j == word[i].size() - 1)
                {
                    translated += 'k';
                }
            }
            else translated += word[i][j];
        }

        cout << translated << endl;
    }
}
