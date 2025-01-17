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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        if(!l1){
            return l2;
        }
        if(!l2){
            return l1;
        }
        
        int carry = 0;
        ListNode* temp = new ListNode(0);
        ListNode* t = temp;
        while(l1 and l2){
            int sum = l1->val + l2->val + carry;
            carry = sum/10;
            ListNode* inter = new ListNode(sum%10);
            t->next = inter;
            t = inter;
            l1 = l1->next;
            l2 = l2->next;
        }
        
        while(l1){
            int sum = l1->val + carry;
            carry = sum/10;
            ListNode* inter = new ListNode(sum%10);
            t->next = inter;
            t = inter;
            l1 = l1->next;
        }
         while(l2){
            int sum = l2->val + carry;
            carry = sum/10;
            ListNode* inter = new ListNode(sum%10);
            t->next = inter;
            t = inter;
            l2 = l2->next;
        }
        
        if(carry != 0){
            ListNode* inter = new ListNode(carry);
            t->next = inter;
            t = inter;
        }
        
        
        return temp->next;
    }
};