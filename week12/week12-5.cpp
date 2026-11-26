// LeetCode 445. Add Two Numbers II
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        stack<int> s1, s2;


        while (l1 != nullptr) {
            s1.push(l1->val);
            l1 = l1->next;
        }
        while (l2 != nullptr) {
            s2.push(l2->val);
            l2 = l2->next;
        }

        ListNode* ans = nullptr; // 用來記錄目前答案的頭節點
        int carry = 0;


        while (!s1.empty() || !s2.empty() || carry > 0) {
            int val = carry;
            if (!s1.empty()) {
                val += s1.top();
                s1.pop();
            }
            if (!s2.empty()) {
                val += s2.top();
                s2.pop();
            }

            carry = val / 10;


            ListNode* now = new ListNode(val % 10);
            now->next = ans;
            ans = now;
        }

        return ans;
    }
};
