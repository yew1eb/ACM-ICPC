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
    ListNode *deleteDuplicates(ListNode *head) {
        if(head==NULL) return head;
        ListNode *res  = head;
        ListNode *ptr = res;
        while(ptr!=NULL){
            while(ptr->next!=NULL && ptr->val == ptr->next->val){
                ptr->next = ptr->next->next;
            }
            ptr = ptr->next;
             
        }
        return res;
    }
};