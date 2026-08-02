class Solution {
public:
void inorder(TreeNode* root,vector<int>&arr){
stack<TreeNode*> st;
TreeNode* node=root;
while(true)
{
    if(node!=NULL){
        st.push(node); // this created auxilary stack space
        node=node->left; //move to left
    }
    else{
        if(st.empty()) break; //if stack is empty break
        node= st.top(); //else take the top element
st.pop();
   arr.push_back(node->val);
   node=node->right;
    }
}
}
vector<int> inorderTraversal(TreeNode* root) {
        vector<int> arr;
        inorder(root, arr);  
        return arr;
}      
};

 
