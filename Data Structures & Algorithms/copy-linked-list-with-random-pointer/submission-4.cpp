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
        Node* curr = head;
        while (curr != nullptr){
            Node* clone = new Node(curr->val);
            clone->next = curr->next;
            curr->next = clone;
            curr = clone->next ;
        }

        curr = head;
        while (curr != nullptr){
            if (curr->random != nullptr){
                curr->next->random = curr->random->next;
            }
            curr = curr->next->next;
        }

        curr = head;
        Node* dummy = new Node(0);
        Node* clonecurr = dummy;

        while (curr != nullptr){
            Node* nextOriginal = curr->next->next;
            Node* clone = curr->next;

            clonecurr->next = clone;
            clonecurr = clone;

            curr->next = nextOriginal;
            curr = nextOriginal;
        }

        Node* newhead = dummy->next;
        delete dummy;
        return newhead;
    }
};
