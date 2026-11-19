class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        // Base case：空串列或只剩最後一個節點
        if (head == nullptr || head->next == nullptr) {
            return head;
        }

        // 遞迴反轉後面的串列，newHead 永遠會是原串列的最後一個節點
        ListNode* newHead = reverseList(head->next);

        head->next->next = head; // 讓下一個節點指回自己
        head->next = nullptr;    // 斷開舊連結，防止成環

        return newHead;
    }
};
