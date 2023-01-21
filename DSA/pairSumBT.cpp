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

bool searchBT(BinaryTreeNode<int>* root, int v){
    if(!root) return false;
    if(root->data == v) {
        root->data = INT_MIN;
        return true;
    }
    return searchBT(root->left,v) || searchBT(root->right,v);
}

void pairSum(BinaryTreeNode<int>* root, int s, BinaryTreeNode<int>* curr){
    if(!curr) return;
    int x = s-(curr->data);
    if(searchBT(root,x)) cout<<curr->data<<" "<<x<<endl;
    pairSum(root,s,curr->left);
    pairSum(root,s,curr->right);
}

int main(){

    BinaryTreeNode<int>* root = inputBTree();
    pairSum(root,15,root);

    return 0;
}