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
    ListNode *detectCycle(ListNode *head) {
        ListNode *a = head, *b = head;
        int pos = 0;
        while(b && b->next){
            a = a->next;
            b = b->next->next;
            if(a == b){
                ListNode *p = head;
                while(a != p){
                    a = a->next;
                    p = p->next;
                    pos++;
                }
                return a;
            }
        }
        pos = -1;
        return NULL;
    }
};