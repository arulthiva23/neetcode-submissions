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
    void reorderList(ListNode* head) {
        if (!head || !head->next || !head->next->next){
            return;
        }

        ListNode* slow = head;
        ListNode* fast = head;

        while (fast != nullptr && fast->next != nullptr){
            slow = slow->next;
            fast = fast->next->next;
        }

        ListNode* curr = slow->next;
        slow->next = nullptr;

        ListNode* prev = nullptr;
        ListNode* nextNode = nullptr;
        while (curr!=nullptr){
            nextNode = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextNode;
        }   

        ListNode* firsthalf = head;
        ListNode* secondhalf = prev;

        while (secondhalf != nullptr){
            ListNode* temp1 = firsthalf->next;
            ListNode* temp2 = secondhalf->next;

            firsthalf->next = secondhalf;
            secondhalf->next = temp1;

            firsthalf = temp1;
            secondhalf = temp2;
        }

    }
};
