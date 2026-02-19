#include <bits/stdc++.h>
using namespace std;

int maximumUniqueSubarray(vector<int> &nums)
{
    int n = nums.size();
    unordered_set<int> seen;
    for (int i = 0; i < n; i++)
        seen.insert(nums[i]);

    int maxSum = 0;
    for (int num : seen)
        maxSum += num;

    int m = seen.size();
    int maxNum = 0;
    for (int i = 0; i < n; i++)
    {
        if (i + m > n)
            break;

        unordered_set<int> sub;
        bool exist = true;
        int sum = 0;
        for (int j = i; j < i + m; j++)
        {
            if (sub.find(nums[j]) != sub.end())
            {
                exist = false;
                break;
            }

            sum += nums[j];
        }

        if (exist)
        {
            maxNum = max(maxNum, sum);
            if (maxNum == maxSum)
                return maxNum;
        }
    }

    return maxNum;
}

int main()
{
    vector<int> nums = {5, 2, 1, 2, 5, 2, 1, 2, 5};
    cout << maximumUniqueSubarray(nums) << endl;
    return 0;
}