#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, i = 1;
    cin >> t;
    while (t--)
    {
        vector<int> salary(3);
        for (int i=0;i<3;i++)
        {
            int input;
            cin >> input;
            salary[i] = input;
        }

        sort(salary.begin(), salary.end());
        cout << "Case " << i << ": " << salary[1] << endl;
        i++;
    }
}
