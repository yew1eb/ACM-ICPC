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
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {  
        ListNode *res = new ListNode(0);
        ListNode *ptr = res;
        int val1, val2, up = 0;
        while(l1 || l2){  
            val1 = 0;  
            if(l1){  
                val1 = l1->val;  
                l1 = l1->next;  
            }  
            val2 = 0;  
            if(l2){  
                val2 = l2->val;  
                l2 = l2->next;  
            }  
              
            up = val1 + val2 + up;
            ptr->next = new ListNode(up % 10);
            up /= 10;
            ptr = ptr->next;
        }
        if(up==1){
            ptr->next = new ListNode(1);
        }
        return res->next;
    }  
};







