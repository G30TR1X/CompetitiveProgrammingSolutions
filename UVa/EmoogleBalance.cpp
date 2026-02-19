#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, j = 1;
    while (cin >> n, n)
    {
        int er = 0, eb = 0;
        for (int i = 0; i < n; i++)
        {
            int input;
            cin >> input;
            if (input == 0) eb++;
            else er++;
        }

        cout << "Case " << j << ": " << er - eb << endl;
        j++;
    }
}
