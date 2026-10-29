// LeetCode 54. Spiral Matrix
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int M = matrix.size(), N = matrix[0].size(); // 長、寬
        vector<int> ans;
        int left = 0, right = N-1, up = 0, down = M-1; // 四個邊界

        while (left <= right && up <= down) {
            // 往右:走最上面這條
            for (int j = left; j <= right; j++) {
                ans.push_back(matrix[up][j]);
            }
            up++; // 上邊界往內縮

            // 往下:走最右邊這條
            for (int i = up; i <= down; i++) {
                ans.push_back(matrix[i][right]);
            }
            right--; // 右邊界往內縮

            // 往左:走最下面這條(要確認還有列可以走,避免單列重複)
            if (up <= down) {
                for (int j = right; j >= left; j--) {
                    ans.push_back(matrix[down][j]);
                }
                down--; // 下邊界往內縮
            }

            // 往上:走最左邊這條(要確認還有行可以走,避免單行重複)
            if (left <= right) {
                for (int i = down; i >= up; i--) {
                    ans.push_back(matrix[i][left]);
                }
                left++; // 左邊界往內縮
            }
        }
        return ans;
    }
};
