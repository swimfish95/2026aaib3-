// week03-2.cpp 學習計畫 Basic 第8題
// 1822. Sign of the Product of an Array
class Solution {
public:
    int arraySign(vector<int>& nums) {
        int neg = 0; // （統計）有幾個負數
        for (int num : nums) {
            if (num < 0) neg++; // 遇到負數
            if (num == 0) return 0; // 遇到0
        }
        if (neg % 2 == 0) return 1;
        else return -1;

        // 用錯的方法算一次(數字有1000個,乘起來太大了,不行)
        // int ans = 1;
        // for (int num : nums) { // 進階C++迴圈，逐一處理
        //     ans *= num; // 乘進去
        // }
    }
};
