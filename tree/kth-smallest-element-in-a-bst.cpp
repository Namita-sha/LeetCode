class Solution {
public:
    int kthSmallest(TreeNode* root, int k) {
        vector<int> values;
        inorder(root, values);
        return values[k - 1];
    }

private:
    void inorder(TreeNode* node, vector<int>& values) {
        if (!node) return;
        inorder(node->left, values);
        values.push_back(node->val);
        inorder(node->right, values);
    }
};
 