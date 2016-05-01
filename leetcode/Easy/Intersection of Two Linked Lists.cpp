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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(headA==NULL || headB==NULL) return NULL;
        ListNode *tmpA = headA, *tmpB = headB;
        int la = 0, lb = 0;
        while(tmpA != NULL) {
            la++;
            tmpA = tmpA->next;
        }
        while(tmpB != NULL) {
            lb++;
            tmpB = tmpB->next;
        }
        tmpA = headA;
        tmpB = headB;
        if(la < lb){
            swap(tmpA, tmpB);
            swap(la, lb);
        }
        for(int i=0; i<la - lb; ++i) {
            tmpA = tmpA->next;
        }
        while(tmpA != NULL){
            if(tmpA == tmpB) return tmpA;
            tmpA = tmpA->next;
            tmpB = tmpB->next;
        }
        return NULL;
    }
};