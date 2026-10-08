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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode temp;
        temp.next = head;
        ListNode* pre = head;
        int length=0;
        while(pre){
            pre=pre->next;
            length++;
        }
        pre = &temp;
        for(int a=length-n;a>0;a--){
            pre = head;
            head = head->next;
            if (head==NULL)
                return temp.next;
        }
        pre->next = head->next;
        delete(head);
        return temp.next;
    }
};
