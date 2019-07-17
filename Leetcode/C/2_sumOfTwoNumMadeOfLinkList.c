/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2){
    short temp = 0;
    short i = 0;
    struct ListNode* temp1 = l1;
    struct ListNode* temp2 = l2;
    while(true)
    {
        temp1 = temp1->next;
        temp2 = temp2->next;
        if( temp1 == NULL && (i = 1) )  break;
        else if( temp2 == NULL) break;
    }
    temp1 = i?l2:l1;
    temp2 = i?l1:l2;
    int temp2Val = temp2 -> val;
    while(true)
    {   
        int BT = temp1 -> val + temp2Val + temp;
        temp1 -> val = BT % 10;
        temp =  BT / 10;
        if( temp1 -> next == NULL && temp )  
        {
            struct ListNode* lastNode = (struct ListNode*)malloc(sizeof(struct ListNode));
            lastNode -> next = NULL;
            lastNode -> val = 1;
            temp1 -> next = lastNode;
            break;
        }
        else if(temp1 -> next == NULL)  break;
        else    temp1 = temp1 -> next;
        if(temp2 -> next != NULL )
        {
            temp2 = temp2 -> next;
            temp2Val = temp2 -> val;
        }
        else    temp2Val = 0;
    }
    return i?l2:l1;
}
//千万不要同时使用&在两个操作数都是0或1时可以替代&&的特性与&&的熔断特性，该用&&的时候不要为了节省一点速度而用&!
//在多个if非嵌套排列时，要注意前一种if是否完全把不期望的情况全部break或return了
//在题目给了struct名时，背熟这个名字，不要在后面声明变量时写错
