#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n, k, max = 0, size = 0;
    unordered_map<long long int, long long int> ball;
    unordered_set<long long int> seen;

    cin >> n >> k;
    for (int i=0;i<n;i++)
    {
        long long int input;
        cin >> input;
        ball[input]++;
    }

    while (size < k)
    {
        long long int highestCount = 1, index = 0;
        for (auto hash: ball)
        {
            auto seenValue = seen.find(hash.first);    
            if (seenValue != seen.end())
                continue;

            if (hash.second >= 2 && hash.second > highestCount)
            {
                highestCount = hash.second;
                index = hash.first;
            }
        }
        seen.insert(index);
        max += highestCount-1;
        size++;
    }

    cout << max << endl;
}
