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
    void deleteNode(ListNode* node) {
        // We are deleting the node, so we copy the value of the next node into the current node
        node->val = node->next->val;
        // Then we remove the next node by pointing the current node's next to the next of the next node
        ListNode* temp = node->next;
        node->next = node->next->next;
        delete temp; // delete the duplicate node (the original next node)
    }
};