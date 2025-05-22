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
        stack<int> q;
        while(b && b->next){
            q.push(a->val);
            a = a->next;
            b = b->next->next;
        }
        
        if(b != NULL){
            a = a->next;
        }
        while(a){
            if(a->val != q.top()){
                return false;
            }
            a = a->next;
            q.pop();
        }
        return true;
    }
};