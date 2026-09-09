class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<int> values;
        for (ListNode* node : lists) {
            while (node != nullptr) {
                values.push_back(node->val);
                node = node->next;
            }
        }
        sort(values.begin(), values.end());

        ListNode dummy(0);
        ListNode* current = &dummy;
        for (int val : values) {
            current->next = new ListNode(val);
            current = current->next;
        }

        return dummy.next;
    }
};