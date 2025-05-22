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
        unordered_set<ListNode *> x;
        ListNode *a = headA;
        while(a){
            x.insert(a);
            a = a->next;
        }
        ListNode *b = headB;
        while(b){
            if(x.contains(b)){
                return b;
            }
            b = b->next;
        }
        return NULL;
    }
};