#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, ans, input;
        bool exist = false;
        cin >> n;
        vector<int> boolean(n);
        for (int i = 0; i < n; i++)
        {
            cin >> input;
            boolean[i] = input;
            if (input == 0 && i != 0)
            {
                if (boolean[i-1])
                {
                    ans = i;
                    exist = true;
                }
            }
        }

        if (exist)
            cout << "OUTPUT " << ans-1 << endl;
    }
}
