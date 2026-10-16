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
    int checkinc(int& a, int& b) {
        a += b;
        if (a > 10) {
            a -= 10;
            return 1;
        }
        return 0;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry = 0;
        ListNode head;
        head.next = l1;
        ListNode* prel1 = &head;
        while (l1 || l2) {
            if (!l1) {
                prel1->next = l2;
                l1 = l2;
                l2 = NULL;
            }
            l1->val+=carry;
            if (l2) {
                l1->val+=l2->val;
            }
            carry = l1->val/10;
            l1->val %=10;
            if (l1) {
                prel1 = l1;
                l1 = l1->next;
            }
            if (l2) l2 = l2->next;
        }
        if (carry) {
            prel1->next = new ListNode();
            prel1->next->val = carry;
        }
        return head.next;
    }
};
