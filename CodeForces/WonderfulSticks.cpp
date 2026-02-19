#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string sticks;
        cin >> n >> sticks;
        string result = "";
        int smallest = 1, highest = n;

        for (int i = n-2; i >= 0; i--)
        {
            if (sticks[i] == '<')
            {
                result = to_string(smallest) + " " + result;
                smallest++;
            }
            else
            {
                result = to_string(highest) + " " + result;
                highest--;
            }
        }

        cout << max(smallest++, highest--) << " " << result << endl;
    }
}
