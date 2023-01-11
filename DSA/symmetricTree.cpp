class Solution {
public:
    void leftTraverse(TreeNode* root,vector<int> &arr){
        if(!root){
            arr.push_back(0);
            return;
        }
            arr.push_back(root->left?(root->left->val==0?1:root->left->val):0);
            leftTraverse(root->left,arr);
            arr.push_back(root->right?(root->right->val==0?-1:-(root->right->val)):0);
            leftTraverse(root->right,arr);
        
    }
     void rightTraverse(TreeNode* root,vector<int> &arr){
        if(!root){
            arr.push_back(0);
            return;
        }
            arr.push_back(root->right?(root->right->val==0?-1:-(root->right->val)):0);
            rightTraverse(root->right,arr);
            arr.push_back(root->left?(root->left->val==0?1:root->left->val):0);
            rightTraverse(root->left,arr);
    }
    bool isSymmetric(TreeNode* root) {
        if(!root->left && !root->right) return true;
        if(!root->left || !root->right) return false;
        vector<int> arr1,arr2;
        arr1.push_back(root->left->val);
        arr2.push_back(-(root->right->val));
        leftTraverse(root->left,arr1);
        rightTraverse(root->right,arr2);
        if(arr1.size()!=arr2.size()) return false;
        for(int i=0;i<arr1.size();i++){
            // cout<<arr1[i]<<" "<<arr2[i]<<endl;
            if(arr1[i]+arr2[i]==0){
                continue;
            } else {
                return false;
            }
        }

        return true;
    }
};
