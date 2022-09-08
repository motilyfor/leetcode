// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include "commoncppproblem2.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode.cn id=2 lang=cpp
 *
 * [2] 两数相加
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

/**
 * Author: motilyfor
 * 执行用时: 16 ms
 * 内存消耗: 68.9 MB
**/
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int sum;
        ListNode* head = l1;
        int overflow = 0;
        while (l1 != NULL || l2 != NULL)
        {
            if (l1)
            {
                sum = l1->val;
            }
            if (l2)
            {
                sum += l2->val;
                l2 = l2->next;
            }
            // 有进位情况
            if (overflow)
                sum++;

            l1->val = sum >= 10 ? sum % 10 : sum;
            overflow = sum / 10;


            if(l1->next != NULL)
            {
                l1 = l1->next;
            }else if(l2 != NULL) {
                l1 = (l1->next = l2);
                l2 = NULL;
            } else {
                break;
            }
        }
        if (overflow != 0)
        {
            l1->next = new ListNode(1);
        }

        return head;
    }
};
// @lc code=end

