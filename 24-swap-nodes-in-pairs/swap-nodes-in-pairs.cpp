class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if (!head || !head->next) return head;   // nothing to swap

        ListNode* newHead = head->next;          // 2nd node becomes new head
        head->next = swapPairs(newHead->next);   // swap rest of the list
        newHead->next = head;                    // connect back

        return newHead;
    }
};
