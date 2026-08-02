class Solution {
public:
    bool isPalindrome(ListNode* head) {
        // Copy values into an array
        vector<int> vals;
        ListNode* curr = head;
        while (curr != nullptr) {
            vals.push_back(curr->val);
            curr = curr->next;
        }

        // Two-pointer palindrome check
        int left = 0;
        int right = vals.size() - 1;
        while (left < right) {
            if (vals[left] != vals[right]) {
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
};