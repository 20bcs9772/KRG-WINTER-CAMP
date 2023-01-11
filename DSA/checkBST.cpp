#include<bits/stdc++.h>
#include "BinaryTreeNode.h"
using namespace std;

bool checkBST(BinaryTreeNode<int>* root){
    if(!root) return true;
    if(root->left && root->right)
        return root->left->data < root->data && root->data < root->right->data && checkBST(root->left) && checkBST(root->right);
    else if (root->left) return root->left->data < root->data && checkBST(root->left);
    else if (root->right) return root->data < root->right->data && checkBST(root->right);
    else return true;
}

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
    cout<<checkBST(root)<<endl;

    return 0;
}