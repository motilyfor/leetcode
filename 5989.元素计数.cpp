/*
 * @lc app=leetcode.cn id=5989 lang=cpp
 *
 * [5989] 元素计数
 */

// @lc code=start
class Solution {
public:
    int countElements(vector<int>& nums) {
        int ma = nums[0];
        int mi = ma;
        for(int v : nums)
        {
            ma = max(v, ma);
            mi = min(v, mi);
        }
        int ans = 0;
        for(int v : nums)
        {
            if(v > mi && v < ma) 
                ans ++ ;
        }
        return ans;
    }
};
// @lc code=end

