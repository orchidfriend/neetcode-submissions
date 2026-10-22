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
    ListNode* reverseList(ListNode* head) {
        ListNode* t = head;
        while (t != NULL && t->next != NULL) {
            ListNode* temp = t->next;
            t->next = temp->next;
            temp->next = head;
            head = temp;
        }
        return head;
    }
};
