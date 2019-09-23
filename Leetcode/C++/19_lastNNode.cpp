/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode * follow = new ListNode(0);
        follow->next = head;
        ListNode * pre = follow;
        
        for( int i = 0 ; i < n; i++){
            pre = pre->next;
        }
        if(pre->next == NULL){
            return head->next;
        }
        while( pre->next != NULL){
            pre = pre->next;
            follow = follow->next;
        }
        follow->next = follow->next->next;
        return head;
    }
};
