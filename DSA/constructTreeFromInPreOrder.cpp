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

BinaryTreeNode<int>* construction(int *arr1, int *arr2, int is, int ie){
    // arr1 - preorder
    // arr2 - inorder

    static int preIndex = 0;
    
    if(is>ie){
        return NULL;
    }

    BinaryTreeNode<int>* t = new BinaryTreeNode<int>(arr1[preIndex++]);

    if(is==ie) return t;

    int inIndex=0;
    for(int i=is;i<=ie;i++){
        if(arr1[preIndex-1]==arr2[i]){
            inIndex = i;
            break;
        }
    }

    t->left = construction(arr1,arr2,is,inIndex-1);
    t->right = construction(arr1,arr2,inIndex+1,ie);
    return t;
}


int main(){
    int n;
    cin>>n;
    int *arr1 = new int (n);
    int *arr2 = new int (n);

    int i = 0;
    while(i<n){
        cin>>arr1[i];
        i++;
    }

    i = 0;
    while(i<n){
        cin>>arr2[i];
        i++;
    }

    BinaryTreeNode<int>* root = construction(arr1,arr2,0,n-1);
    printBTree(root);

    delete [] arr1;
    delete [] arr2;

    return 0;
}