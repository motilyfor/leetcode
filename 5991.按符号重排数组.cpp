/*
 * @lc app=leetcode.cn id=5991 lang=cpp
 *
 * [5991] 按符号重排数组
 */

// @lc code=start
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> ans(nums.size());
        int i = 0 , j = 1;
        for(int v : nums)
        {
            if(v > 0)
            {
                ans[i] = v;
                i+=2;
            } else {
                ans[j] = v;
                j+=2;
            }
        }
        return ans;        
    }
};
// @lc code=end

