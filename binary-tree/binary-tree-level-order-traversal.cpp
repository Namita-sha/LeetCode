/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans; //2d vector array as for internal level one for all levels external one
        if(root==nullptr){
            return ans; //return empty vector
        }
        //declare the queue
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            int size=q.size();
            vector<int>level;//store nodes at current level(Because you don’t know which inner vector of ans to push into while processing nodes.)
        for(int i=0;i<size;i++){
            TreeNode* node=q.front(); //take next element to process
            q.pop();//remove like we do 1 when its both and right left sides are checked
level.push_back(node->val);
if(node->left!=nullptr){
    q.push(node->left);
    }
    if(node->right !=nullptr){
        q.push(node->right);
    }
}
ans.push_back(level);
        }
        return ans;

    }
};