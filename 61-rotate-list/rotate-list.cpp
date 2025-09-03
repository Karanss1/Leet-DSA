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
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if (!head || !head->next || k == 0) return head;

        // Count length
        int n = 1;
        ListNode* temp = head;
        while (temp->next) {
            temp = temp->next;
            n++;
        }

        // Make it circular
        temp->next = head;

        // Effective rotation
        k = k % n;
        int jump = n - k;

        // Find new tail
        temp = head;
        for (int i = 1; i < jump; i++) {
            temp = temp->next;
        }

        // Break circle
        ListNode* newHead = temp->next;
        temp->next = nullptr;

        return newHead;
    }
};
