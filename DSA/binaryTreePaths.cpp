class Solution {
public:
    void addString(TreeNode* root, vector<string> &arr,string s=""){
        if(!root->left && !root->right){
            s+=to_string(root->val);
            arr.push_back(s);
            return;
        }
        if(root->left) addString(root->left,arr,s+to_string(root->val)+"->");
        if(root->right) addString(root->right,arr,s+to_string(root->val)+"->");
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> arr;
        // string start = to_string(root->val);
        // if(!root->left && !root->right){
        //     arr.push_back(start);
        //     return arr;
        // }
        addString(root,arr);
        return arr;
    }
};
