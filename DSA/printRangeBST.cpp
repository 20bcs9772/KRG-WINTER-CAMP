#include<bits/stdc++.h>
#include "BinaryTreeNode.h"
using namespace std;

void printRangeBST(BinaryTreeNode<int>* root, int k1, int k2){
    if(!root) return;
    if(root->data<k1){
        printRangeBST(root->right,k1,k2);
    } else if (root->data>k2){
        printRangeBST(root->left,k1,k2);
    } else {
        printRangeBST(root->left,k1,k2);
        cout<<root->data<<" ";
        printRangeBST(root->right,k1,k2);
    }
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
    printRangeBST(root,4,9);

    return 0;
}