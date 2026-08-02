class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        // Dummy node simplifies edge case of removing head
        ListNode dummy(0, head);

        // First pass: count total nodes
        int length = 0;
        ListNode* current = head;
        while (current != nullptr) {
            length++;
            current = current->next;
        }

        // Second pass: advance (length - n) steps from dummy
        ListNode* prev = &dummy;
        for (int i = 0; i < length - n; i++) {
            prev = prev->next;
        }

        // Remove the target node
        ListNode* toDelete = prev->next;
        prev->next = prev->next->next;
        delete toDelete;

        return dummy.next;
    }
};