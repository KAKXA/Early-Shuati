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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(l1 == NULL){
            return l2;
        }
        else if(l2 == NULL){
            return l1;
        }
        ListNode * temp;
        if(l1->val >= l2->val){
            temp = l1;
            l1 = l2;
            l2 =temp;
        }
        ListNode * p1 = l1;
        ListNode * p2 = l2;
        temp = p1;
        while( true ){
            while( p1->val <= p2->val ){
                temp = p1;
                p1 = p1->next;
                if(p1 == NULL){
                    temp->next = p2;
                    return l1;
                }
            }
            temp->next = p2;
            while( p2->val <= p1->val){
                temp = p2;
                p2 = p2->next;
                if(p2 == NULL){
                    temp->next = p1;
                    return l1;
                }
            }
            temp->next = p1;
        }
        return l1;
    }
}
//注意考虑传入空链表（空指针）的情况！！
