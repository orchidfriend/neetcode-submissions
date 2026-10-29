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
        ListNode *ptr = head;
        int size=0;
        while(ptr){
            size++;
            ptr = ptr->next;
        }
        ptr = head;
        ListNode *pre = &temp;
        for(int a=0;a<size-n;a++){
            pre = ptr;
            ptr = ptr->next;
        }
        pre->next = ptr->next;
        delete ptr;
        return temp.next;
    }
};
