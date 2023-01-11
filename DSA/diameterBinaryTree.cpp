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

int heightBinaryTree(BinaryTreeNode<int>* root){
    if(!root) return 0;
    return 1+max(heightBinaryTree(root->left),heightBinaryTree(root->right));
}

int diameterBinaryTree(BinaryTreeNode<int>* root){
    if(!root) return 0;
    int lh = heightBinaryTree(root->left);
    int rh = heightBinaryTree(root->right);

    int ld = diameterBinaryTree(root->left);
    int rd = diameterBinaryTree(root->right);

    return max(lh+rh+1,max(ld,rd));

}

int main(){

    BinaryTreeNode<int> *root = inputBTree();
    printBTree(root);
    cout<<diameterBinaryTree(root)<<endl;




    return 0;
}