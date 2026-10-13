/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;

    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
   public:
    Node* copyRandomList(Node* head) {
        unordered_map<Node*, int> address;
        vector<Node*> random_address;
        Node* ptr = head;
        Node dup(-1);
        Node* copy = &dup;
        int num = 0;
        while (ptr) {
            // copy node
            Node* temp = new Node(0);
            temp->val = ptr->val;
            copy->next = temp;
            // record address
            address[ptr] = num;
            random_address.push_back(temp);
            // go to next node
            num++;
            ptr = ptr->next;
            copy = copy->next;
        }
        ptr = head;
        copy = dup.next;
        while (ptr) {
            if (address.find(ptr->random) != address.end()) {
                copy->random = random_address[address[ptr->random]];
            }
            copy = copy->next;
            ptr=ptr->next;
        }
        return dup.next;
    }
};
