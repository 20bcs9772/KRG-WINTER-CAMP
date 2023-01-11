class Solution {
public:
    int sumOfSubtree(TreeNode* root){
        if(!root) return 0;
        int sum=root->val;
        queue <TreeNode*> pd;
        pd.push(root);
        while(pd.size()){
            if(pd.front()->left){
                sum+=pd.front()->left->val;
                pd.push(pd.front()->left);
            }
            
            if(pd.front()->right){
                sum+=pd.front()->right->val;
                pd.push(pd.front()->right);
            }

            pd.pop();
        }

        return sum;
    }
    int findTilt(TreeNode* root) {
        if(!root) return 0;
        queue<TreeNode*> pd;
        pd.push(root);
        while(pd.size()){
            pd.front()->val = abs(sumOfSubtree(pd.front()->left)-sumOfSubtree(pd.front()->right));
            if(pd.front()->left) pd.push(pd.front()->left);
            if(pd.front()->right) pd.push(pd.front()->right);
            pd.pop();
        }

        return sumOfSubtree(root);
    }
};
