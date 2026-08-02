class Solution {
public:
    bool isValidBST(TreeNode* root) {
        return validate(root, LONG_MIN, LONG_MAX);
    }

private:
    bool validate(TreeNode* node, long lower, long upper) {
        if (!node) return true;

        // Current node must be strictly within (lower, upper)
        if (node->val <= lower || node->val >= upper) return false;

        // Left subtree: tighten upper bound to current node's value
        // Right subtree: tighten lower bound to current node's value
        return validate(node->left, lower, node->val)
            && validate(node->right, node->val, upper);
    }
};