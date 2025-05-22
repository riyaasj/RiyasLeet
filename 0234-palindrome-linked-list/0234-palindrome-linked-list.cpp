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
    bool isPalindrome(ListNode* head) {
        ListNode *a = head, *b = head;
        while(b && b->next){
            a = a->next;
            b = b->next->next;
        }
        
        if(b != NULL){
            a = a->next;
        }
        b = NULL;
        while(a){
            ListNode *t = a->next;
            a->next = b;
            b = a;
            a = t;
        }
        a = head;
        while(b){
            if(b->val != a->val){
                return false;
            }
            b = b->next;
            a = a->next;
        }
        return true;
    }
};