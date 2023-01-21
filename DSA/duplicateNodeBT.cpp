#include<bits/stdc++.h>
#include "../BinaryTreeNode.h"
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

BinaryTreeNode<int>* insertDuplicate(BinaryTreeNode<int>* root){
    if(!root) return NULL;
    BinaryTreeNode<int>* temp = new BinaryTreeNode<int>(root->data);
    temp->left = new BinaryTreeNode<int>(root->data);
    temp->left->left = insertDuplicate(root->left);
    temp->right = insertDuplicate(root->right);
    return temp;
}

int main(){

    BinaryTreeNode<int>* root = inputBTree();
    printBTree(insertDuplicate(root));

    return 0;
}