/*
 * @lc app=leetcode id=54 lang=cpp
 *
 * [54] Spiral Matrix
 */

// @lc code=start
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> order;
        int height = 0, width = 0, difference = 0;

        while (order.size() != matrix.size() * matrix[0].size()) {

            for (int j = width; j < matrix[0].size() - difference; j++) {
                order.push_back(matrix[height][j]);
            }

            if (order.size() == matrix.size() * matrix[0].size()) break;

            height++;

            for (int j = height; j < matrix.size() - difference; j++) {
                order.push_back(matrix[j][matrix[0].size() - difference - 1]);
            }

            if (order.size() == matrix.size() * matrix[0].size()) break;
            
            for (int j = matrix[0].size() - difference - 2; j >= width; j--) {
                order.push_back(matrix[matrix.size() - difference - 1][j]);
            }

            if (order.size() == matrix.size() * matrix[0].size()) break;

            difference++;
             
            for (int j = matrix.size() - difference - 1; j >= height; j--) {
                order.push_back(matrix[j][width]);
            }

            if (order.size() == matrix.size() * matrix[0].size()) break;

            width++;
        }

        return order;
    }
};
// @lc code=end

