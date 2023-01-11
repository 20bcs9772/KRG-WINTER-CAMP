class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if(!root) return NULL;

        queue<TreeNode*> pd;
        pd.push(root);

        while(pd.size()){

            if(!pd.front()){
                pd.pop();
                continue;
            }
            
            TreeNode* l = pd.front()->left?pd.front()->left:NULL;
            TreeNode* r = pd.front()->right?pd.front()->right:NULL;
            pd.push(l);
            pd.push(r);
            pd.front()->left=r;
            pd.front()->right=l;
            pd.pop();
        }
        
        return root;
    }
};
