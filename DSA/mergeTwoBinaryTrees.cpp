class Solution {
public:
    void merger(TreeNode* root1, TreeNode* root2, TreeNode* ans){
        if((!root1) && (!root2)){
            ans = NULL;
            return;
        }
        if(!root1){
            ans->val = root2->val;
            if(root2->left){
                ans->left = new TreeNode();
                merger(NULL,root2->left,ans->left);
            }
            if(root2->right){
                ans->right = new TreeNode();
                merger(NULL,root2->right,ans->right);
            }
            return;
        }
        if(!root2){
            ans->val = root1->val;
             if(root1->left){
                ans->left = new TreeNode();
                merger(root1->left,NULL,ans->left);
            }
            if(root1->right){
                ans->right = new TreeNode();
                merger(root1->right,NULL,ans->right);
            }
            return;
        }
        ans->val = (root1->val)+(root2->val);
        if(root1->left || root2->left){
            ans->left = new TreeNode();
            merger(root1->left,root2->left,ans->left);
        }
        if(root1->right || root2->right){
            ans->right = new TreeNode();
            merger(root1->right,root2->right,ans->right);
        }
    }
    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
        if(!root1 && !root2) return NULL;
        TreeNode* ans = new TreeNode();
        merger(root1,root2,ans);
        return ans;
    }
};
