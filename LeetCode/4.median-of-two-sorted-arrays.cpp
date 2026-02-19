/*
 * @lc app=leetcode id=4 lang=cpp
 *
 * [4] Median of Two Sorted Arrays
 */

// @lc code=start
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size(), n = nums2.size(); 
        int median = (m + n) / 2;
        double current = 0, last = 0;

        int i = 0, j = 0;

        while ((i + j) <= median)
        {
            if (i == m)
            {
                last = current;
                current = nums2[j];
                j++;
            }
            else if (j == n)
            {
                last = current;
                current = nums1[i];
                i++;
            }
            else
            {
                if (nums1[i] < nums2[j])
                {
                    last = current;
                    current = nums1[i];
                    i++;
                }
                else
                {
                    last = current;
                    current = nums2[j];
                    j++;
                }
            }
        }

        if ((m + n) % 2 == 0)
        {
            return (current + last) / 2.0;
        }
        else
        {
            return current;
        }
    }
};
// @lc code=end

