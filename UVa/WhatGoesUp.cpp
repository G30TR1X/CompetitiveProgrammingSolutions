#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> num;
    int input;
    while (scanf("%d", &input) == 1)
    {
        if (num.size() == 0 || num.size() == 1)
            num.push_back(input);
        else
        {
            if (num[num.size()-1] < input)
                num.push_back(input);
            else
                num[num.size()-1] = input;
        }
    }

    cout << num.size() << endl;
    cout << "-\n";
    for (int i = 0; i < num.size(); i++)
    {
        cout << num[i] << endl;
    }
}
