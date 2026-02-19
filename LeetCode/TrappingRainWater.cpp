#include <bits/stdc++.h>
using namespace std;

int trap(vector<int>& height) {
    int water = 0, i = 0, j;

    while (i < height.size() - 1)
    {
        if (height[i] == 0)
        {
            i++;
            continue;
        }
        else
        {
            j = i + 1;

            while (height[i] > height[j])
            {
                if (j == height.size() - 1)
                {
                    i++;

                    if (i == height.size() - 1) break;

                    j = i + 1;
                }
                else j++;
            }

            int small = height[i];

            while (i != j)
            {
                i++;

                if (i == height.size() - 1 || i == j) break;

                water += small - height[i];
            }
        }
    }

    return water;
}

int main()
{
    vector<int> height = {0,1,0,2,1,0,1,3,2,1,2,1};

    cout << trap(height) << endl;
}