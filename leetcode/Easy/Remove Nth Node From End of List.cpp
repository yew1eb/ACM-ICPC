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
    ListNode *removeNthFromEnd(ListNode *head, int n) {
        ListNode *pa, *pb;
        pa  = pb = head;
        int i = 0;
        while(pa->next != NULL && i<n) {
            pa = pa->next;
            i++;
        }
        if(i<n-1) return head;
        else if(i==n-1) return head->next;
        
        while(pa->next != NULL) {
            pa = pa->next;
            pb = pb->next;
        }
        pb->next = pb->next->next;
        
        return head;
    }
};