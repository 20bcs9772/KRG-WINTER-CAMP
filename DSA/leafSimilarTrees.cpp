class Solution {
public:
    void leftSeq(TreeNode* root, vector<int>& arr){
        if(root==NULL){
            return;
        }
        if((root->left==NULL)&&(root->right==NULL)){
            arr.push_back(root->val);
            return ;
        }
        leftSeq(root->left,arr);
        leftSeq(root->right,arr);
    }

    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int>arr1;
        vector<int>arr2;
        leftSeq(root1,arr1);
        leftSeq(root2,arr2);
        if(arr1==arr2) return true;
        return false;;
    }
};
