#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    unordered_map<int, int> chocolate;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        chocolate[x]++;
    }
}