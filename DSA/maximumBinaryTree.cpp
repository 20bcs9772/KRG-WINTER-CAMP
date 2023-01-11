class Solution {
public:
    TreeNode* construction(vector<int> &nums, int x, int y){
        if(x==y){
            return NULL;
        }
        int maxIndex=0;
        int maxNum = -1;
        for(int i=x;i<y;i++){
            if(nums[i]>maxNum){
                maxNum=nums[i];
                maxIndex=i;
            }
        }
        TreeNode* ans = new TreeNode(nums[maxIndex]);
        ans->left = construction(nums,x,maxIndex);
        ans->right = construction(nums,maxIndex+1,y);
        return ans;
    }

    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {   
        return construction(nums,0,nums.size());   
    }
};
