/*
 * @lc app=leetcode.cn id=3 lang=cpp
 *
 * [3] 无重复字符的最长子串
 * 执行用时: 4 ms
 * 内存消耗: 6.6 MB
 */

// @lc code=start
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int start = 0;
        int ans = 0;
        int length = s.size();
        int vec[128] = {0};
        for(int end = 0; end < length; end++) {
            if (vec[s[end]] > start) {
                if (end-start>ans) {
                    ans = end-start;
                }
                start = vec[s[end]];
            } 
            vec[s[end]] = end+1;
        }
        ans = max(ans, length-start);
        return ans;
    }
};
// @lc code=end

