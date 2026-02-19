#include <bits/stdc++.h>
#include <vector>
using namespace std;

/*
unsigned long long int latticePaths(unsigned long long int n, unsigned long long int m, unsigned long long int maxGrid)
{
    if (n == maxGrid-1 && m == maxGrid-1)
        return 1;

    if (n > maxGrid-1 || m > maxGrid-1)
        return 0;

    return latticePaths(n + 1, m, maxGrid) + latticePaths(n, m + 1, maxGrid);
}
*/

int main()
{
    unsigned long long int grid[101][101];
    for (int i = 0; i < 101; i++)
        grid[0][i] = grid[i][0] = 1;

    for (int i = 1; i < 101; i++)
        for (int j = 1; j < 101; j++)
            grid[i][j] = grid[i-1][j] + grid[i][j-1];

    unsigned long long int gridSize;
    cin >> gridSize;

    cout << grid[gridSize][gridSize] << endl;

    return 0;
}
