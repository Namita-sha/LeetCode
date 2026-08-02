class Solution {
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return build(nums, 0, nums.size() - 1);
    }

private:
    TreeNode* build(vector<int>& nums, int left, int right) {
        if (left > right) {
            return nullptr;
        }
        // Pick the middle element as the root of this subtree
        int mid = left + (right - left) / 2;
        TreeNode* node = new TreeNode(nums[mid]);
        // Recursively build left and right subtrees from remaining halves
        node->left = build(nums, left, mid - 1);
        node->right = build(nums, mid + 1, right);
        return node;
    }
};