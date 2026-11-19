class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode dummy(0);       // 虛擬頭節點（宣告在 stack 上，不需手動 delete）
        ListNode* tail = &dummy; // tail 永遠指向目前合併結果的最後一個節點

        while (list1 != nullptr && list2 != nullptr) {
            if (list1->val <= list2->val) {
                tail->next = list1;
                list1 = list1->next;
            } else {
                tail->next = list2;
                list2 = list2->next;
            }
            tail = tail->next;   // 推進 tail
        }

        // 其中一條已經走完，直接把另一條剩下的部分整串接上
        tail->next = (list1 != nullptr) ? list1 : list2;

        return dummy.next;
    }
};
