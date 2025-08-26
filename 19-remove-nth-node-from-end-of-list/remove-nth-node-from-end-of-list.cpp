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

    int getListLength (ListNode * head){
        int len = 0;
        while (head != NULL){
            len ++;
            head = head->next;
        }

        return len;
    }
    ListNode* removeNthFromEnd(ListNode* head, int n)  {
        int len = getListLength ( head);
        int pos = len - n;   // main 

            // to remove headnode
        if (pos == 0){
            ListNode* newHead = head->next;
            delete head;
            return newHead;
        }

        // move the node & make it current 
        ListNode* curr = head;
        for( int i=1; i<pos; i++){
            curr = curr->next;
        }

        // delete the node prev 

        ListNode* NodeDel = curr->next;  //curr->next means next node to delete
        curr->next = curr->next->next;  // this lines means skip to next to next
        

        delete NodeDel;

        return head;
    }
};