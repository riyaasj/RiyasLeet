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
private:
    ListNode *r(ListNode* head){
        ListNode *a = head, *b = NULL;
        while(a){
            ListNode *temp = a->next;
            a->next = b;
            b = a;
            a = temp;
        }
        return b;
    }
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == NULL || k == 0){
            return head;
        }
        int n = 1;
        ListNode *temp = head;
        while(temp->next){
            temp = temp->next;
            n++;
        }
        k = k % n;
        if(k == 0){
            return head;
        }
        ListNode* a = r(head), *b = a, *c = NULL;
        while(k > 0){
            c = b;
            b = b->next;
            k--;
        }
        c->next = NULL;
        ListNode *d = r(a);
        a->next = r(b);
        return d;
    }
};