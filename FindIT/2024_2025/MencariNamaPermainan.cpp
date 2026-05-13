#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n, k, max = 0;
    unordered_map<long long int, long long int> ball;
    vector<long long int> verified;

    cin >> n >> k;
    for (int i=0;i<n;i++)
    {
        long long int input;
        cin >> input;
        ball[input]++;
    }

    for (auto hash : ball)
    {
        if (hash.second >= 2)
            verified.push_back(hash.second - 1);
    }

    sort(verified.rbegin(), verified.rend());

    for (int i = 0; i < min(k, (long long int) verified.size()); i++)
    {
        max += verified[i];
    }

    cout << max << endl;
}
