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
    ListNode* oddEvenList(ListNode* head) {
        if(head == NULL || head->next == NULL || head->next->next == NULL){
            return head;
        }
        ListNode *end = head, *o = head, *e = head->next;
        int c = 1;
        while(end->next){
            end = end->next;
            c++;
        }
        c = c / 2;
        while(c--){
            end->next = e;
            o->next = e->next;
            e->next = NULL;
            o = o->next;
            end = e;
            e = o->next;
        }
        return head;
    }
};