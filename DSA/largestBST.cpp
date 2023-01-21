#include<bits/stdc++.h>
#include"../BinaryTreeNode.h"
using namespace std;

// https://leetcode.com/problems/maximum-sum-bst-in-binary-tree/ try it

void printBTree(BinaryTreeNode<int>* root){
    if(!root) return;
    queue<BinaryTreeNode<int>*> pd;
    pd.push(root);
    while(pd.size()){
        cout<<pd.front()->data<<" ";
        if(pd.front()->left) {
            cout<<"L"<<pd.front()->left->data<<" ";
            pd.push(pd.front()->left);
        }
        if(pd.front()->right) {
            cout<<"R"<<pd.front()->right->data<<" ";
            pd.push(pd.front()->right);
        }
        cout<<endl;
        pd.pop();
    }
}

bool checkBST(BinaryTreeNode<int>* root){
    if(!root) return true;
    if(root->left && root->right)
        return root->left->data < root->data && root->data < root->right->data && checkBST(root->left) && checkBST(root->right);
    else if (root->left) return root->left->data < root->data && checkBST(root->left);
    else if (root->right) return root->data < root->right->data && checkBST(root->right);
    else return true;
}

int heightBST(BinaryTreeNode<int>* root){
    if(!root) return 0;
    return 1+max(heightBST(root->left),heightBST(root->right));
}

int largestBST(BinaryTreeNode<int>* root){
    if(!root) return 0;
    int ans=0;
    if(checkBST(root)){
        ans=heightBST(root);
        cout<<root->data<<" "<<ans<<endl;
    } else {
        ans = max(largestBST(root->left),largestBST(root->right));
    }

    return ans;
}

// void lar(){
//     vector<int> arr;
//     int sum=0;
//     int maxSum=0;
//     int s=0;
//     bool i=false;
//     for(int i=1;i<arr.size();i++){
//         if(arr[i-1]<arr[i]){
//             if(!i) {
//                 i=true;
//                 s=i-1;
//                 sum+=arr[i-1];
//             }
//             if()
//         }
//     }
// }

BinaryTreeNode<int>* inputBTree(){
    cout<<"Enter data : ";
    int n;
    cin>>n;
    if(!n) return NULL;
    BinaryTreeNode<int>* root = new BinaryTreeNode<int>(n);
    queue<BinaryTreeNode<int>*> pd;
    pd.push(root);
    while(pd.size()){
        int l,r;
        cout<<"Enter L data : ";
        cin>>l;
        if(l){
            pd.front()->left = new BinaryTreeNode<int>(l);
            pd.push(pd.front()->left);
        } 
        cout<<"Enter R data : ";
        cin>>r;
        if(r){
            pd.front()->right = new BinaryTreeNode<int>(r);
            pd.push(pd.front()->right);
        }
        pd.pop();
    }

    return root;
}


int main(){
    BinaryTreeNode<int>* root = inputBTree();
    // printBTree(root);
    cout<<largestBST(root)<<endl;

    return 0;
}