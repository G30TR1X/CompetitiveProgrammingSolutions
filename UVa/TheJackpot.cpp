#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    while (scanf("%lld", &n), n)
    {
        long long int highStreak = -1;
        long long int streak[100010];
        for (int i = 0; i < n; i++)
        {
            long long int input;
            cin >> input;
            streak[i] = input;
        }

        long long int currStreak = -1;
        for (int i = 0; i < n; i++)
        {
            if (streak[i] <= 0)
            {
                highStreak = max(highStreak, currStreak);
                currStreak = -1;
            }
            else
                currStreak = (currStreak == -1) ? streak[i] : currStreak + streak[i];
        }
        highStreak = max(highStreak, currStreak);

        if (highStreak == -1)
            cout << "Losing streak." << endl;
        else
            cout << "The winning streak is " << highStreak << "." << endl;
    }

    return 0;
}
