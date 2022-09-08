/*
 * @lc app=leetcode.cn id=2129 lang=cpp
 *
 * [2129] 将标题首字母大写
 */

// @lc code=start
class Solution {
public:
    string capitalizeTitle(string title) {
        int cha = 'A' - 'a';
        int len = title.size();
        int zhuangtai = 0;
        for( int i = 0; i < len ; i++) {
            if (len < 3) {
                if(title[i] >= 'A' && title[i]<='Z')
                {
                    title[i] -= cha;
                }
            }

            zhuangtai++;
            if(title[i] == ' ')
            {
                zhuangtai = 0;
            }

            if(title[i] >= 'A' && title[i]<='Z')
            {
                title[i] -= cha;
            }

            if(zhuangtai == 3)
            {
                title[i-2] += cha;
            }
        }
        
        return title;        
    }
};
// @lc code=end

