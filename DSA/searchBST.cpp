#include<bits/stdc++.h>
#include "BinaryTreeNode.h"
using namespace std;

bool searchBST(BinaryTreeNode<int>* root, int val){
    if(!root) return false;
    if(root->data==val) return true;
    else if(root->data>val) return searchBST(root->left,val);
    else return searchBST(root->right,val);
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

    return 0;
}