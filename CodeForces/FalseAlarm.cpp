#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,x;
        cin >> n >> x;
        bool doorEncounter = false, pass = true, time = false;
        for (int i = 0; i < n; i++)
        {
            int door;
            cin >> door;
            
            if (door && !doorEncounter && !time)
                doorEncounter = true;
            
            if (doorEncounter)
            {
                x--;
                if (x == 0)
                {
                    time = true;
                    doorEncounter = false;
                    continue;
                }
            }

            if (time && door)
                pass = false;
        }

        if (pass)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}
