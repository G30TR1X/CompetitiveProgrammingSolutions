#include <bits/stdc++.h>
using namespace std;

int main()
{
    string subsoal;
    cin >> subsoal;
    long long int N, staminaDengklek, staminaMonster;
    cin >> N >> staminaDengklek >> staminaMonster;

    vector<long long int> P(N - 1);
    vector<long long int> K(N - 1);
    vector<long long int> L(N - 1);
    priority_queue<long long int> difference;
    long long int totalTime = 0;

    for (int i = 0; i < N - 1; i++)
    {
        cin >> P[i] >> K[i] >> L[i];
    }
    
    for (int i = 0; i < N; i++)
    {
        if (i == N - 1)
        {
            if (staminaDengklek < staminaMonster)
            {
                while (!difference.empty() && staminaDengklek < staminaMonster)
                {
                    totalTime -= difference.top();
                    difference.pop();
                    staminaDengklek++;
                }

                if (staminaDengklek < staminaMonster) totalTime = -1;
            }
        }
        else
        {
            if (staminaDengklek < P[i])
            {
                while (!difference.empty() && staminaDengklek < P[i])
                {
                    totalTime -= difference.top();
                    difference.pop();
                    staminaDengklek++;
                }

                if (staminaDengklek < P[i])
                {
                    totalTime = -1;
                    break;
                }
            }

            if (K[i] >= L[i])
            {
                totalTime += L[i];
                staminaDengklek++;
            }
            else
            {
                totalTime += K[i];
                difference.push(K[i] - L[i]);
            }
        }
    }

    cout << totalTime << endl;
}