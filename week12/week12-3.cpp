// week12-3.cpp 學習計畫 Linked List 第3題
// LeetCode 2. Add Two Numbers 超級大的數相加
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* ans = new ListNode(999);
        ListNode* now = ans;
        int carry = 0;

        // 只要有一邊還沒走完就繼續
        while (l1 != nullptr || l2 != nullptr) {
            int val = carry; // 先把上一輪的進位放進來

            //分開判斷，有節點才取值並往後移
            if (l1 != nullptr) {
                val += l1->val;
                l1 = l1->next;
            }
            if (l2 != nullptr) {
                val += l2->val;
                l2 = l2->next;
            }

            now->next = new ListNode(val % 10);
            carry = val / 10;
            now = now->next;
        }

        // 全部加完後，如果還有進位（例如 5+5=10），補上最後一個節點
        if (carry > 0) {
            now->next = new ListNode(carry);
        }

        return ans->next;
    }
};
