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
    bool hasCycle(ListNode *head) {
        if(head == NULL) return false;
        ListNode *fir, *sec;
        fir = sec = head;
        while(sec != NULL && sec->next != NULL){
            fir = fir->next;
            sec = sec->next->next;
            if(fir==sec) return true;
        }
        return false;
    }
};