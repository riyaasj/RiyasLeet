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
        temp->next = head;
        ListNode *a = head;
        for (int i = 0; i < n - k - 1; i++) {
            a = a->next; // Move to the correct spot
        }
        temp = a->next;
        a->next = NULL;
        return temp;
    }
};