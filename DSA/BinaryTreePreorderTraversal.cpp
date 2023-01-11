class Solution {
public:
    void preorder(TreeNode* root, vector<int> &arr){
        if(!root) return;
        arr.push_back(root->val);
        if(root->left)  preorder(root->left,arr);
        if(root->right)  preorder(root->right,arr);
    }

    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> arr;
        preorder(root,arr);
        return arr;
    };
};
