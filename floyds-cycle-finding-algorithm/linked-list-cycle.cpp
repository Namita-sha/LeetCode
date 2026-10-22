/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
    if (!head || !head->next) return false;      // 0 or 1 node → impossible to form a cycle

        ListNode* slow = head;       // moves 1 step
        ListNode* fast = head->next; // moves 2 steps (start one step ahead to avoid self-match at head)

        while (fast && fast->next) {         // keep going while 2-step jump is possible
            if (slow == fast) return true;   // pointers meet → cycle detected
            slow = slow->next;               // 1-step
            fast = fast->next->next;         // 2-step
        }
        return false; // fast hit nullptr → reached tail → no cycle
    }
};