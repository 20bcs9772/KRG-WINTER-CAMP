#include<bits/stdc++.h>
#include "BinaryTreeNode.h"
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

BinaryTreeNode<int>* constructBST(int arr[], int s, int e, int n){
    if(s<0 || e>n || s>e) return NULL;
    if(s==e){
        return new BinaryTreeNode<int>(arr[s]);
    }
    int mid = (s+e)/2;
    BinaryTreeNode<int>* root = new BinaryTreeNode<int>(arr[mid]);
    root->left = constructBST(arr,s,mid-1,n);
    root->right = constructBST(arr,mid+1,e,n);
    return root;
}

int main(){

    int arr[] = {1,2,3,4,5,6,7};
    BinaryTreeNode<int>* root = constructBST(arr,0,6,6);
    printBTree(root);

    return 0;
}