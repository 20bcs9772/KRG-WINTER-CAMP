#include<bits/stdc++.h>
#include"BinaryTreeNode.h"
using namespace std;

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

int findRep(BinaryTreeNode<int>* &root){
        BinaryTreeNode<int>* temp = root->right;
        while(temp && temp->left){
            temp = temp->left;
        }
        root->data = temp->data;
        return temp->data;
}

BinaryTreeNode<int>* deleteNode(BinaryTreeNode<int>* root, int val){
    if(!root) return NULL;

    if(root->data>val) root->left = deleteNode(root->left, val); 
    else if(root->data<val) root->right = deleteNode(root->right, val); 
    else {
        if(!root->left && !root->right) return NULL;
        else if(!root->right) return root->left;
        else if(!root->left) return root->right;
        else {
            root->right = deleteNode(root->right,findRep(root));
        }
    }
    return root;
}

BinaryTreeNode<int>* insertNode(BinaryTreeNode<int>* root, int val){
    if(!root) return new BinaryTreeNode<int>(val);
    if(root->data>val) root->left = insertNode(root->left,val);
    if(root->data<val) root->right = insertNode(root->right,val);
    return root;
}

void insertNode(BinaryTreeNode<int>* root){
    root = insertNode(root,5);
    root = insertNode(root,20);
    root = insertNode(root,19);
    root = insertNode(root,18);
    root = insertNode(root,11);
    root = insertNode(root,12);
    root = insertNode(root,13);
    root = insertNode(root,17);
    root = insertNode(root,16);
    root = insertNode(root,15);
    root = insertNode(root,14);
    return;
}

int main(){
    BinaryTreeNode<int>* root = new BinaryTreeNode<int>(10);
    insertNode(root);
    deleteNode(root,10);
    printBTree(root);

    return 0;
}