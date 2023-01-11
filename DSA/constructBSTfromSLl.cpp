#include<bits/stdc++.h>
#include"LinkedList.h"
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

BinaryTreeNode<int>* constructBST(LinkedList<int>* &node){
    if(!node) return NULL;
    if(!node->next) return new BinaryTreeNode<int>(node->data);
    LinkedList<int> *slow=node,*fast=node,*prev=node;
    while(fast && fast->next){
        prev = slow;
        slow = slow->next;
        fast = fast->next->next;
    }

    if(slow==node) return new BinaryTreeNode<int>(node->data);

    prev->next=NULL;

    BinaryTreeNode<int> *root = new BinaryTreeNode<int>(slow->data);
    cout<<root->data<<endl;
    root->left = constructBST(node);
    root->right = constructBST(slow->next);
    return root;
}

int main(){
    LinkedList<int>* node = new LinkedList<int>(9);
    node->next = new LinkedList<int>(10);
    node->next->next = new LinkedList<int>(23);
    node->next->next->next = new LinkedList<int>(25);
    node->next->next->next->next = new LinkedList<int>(30);
    node->next->next->next->next->next = new LinkedList<int>(38);
    node->next->next->next->next->next->next = new LinkedList<int>(41);
    node->next->next->next->next->next->next->next = new LinkedList<int>(55);
    node->next->next->next->next->next->next->next->next = new LinkedList<int>(65);
    printBTree(constructBST(node));

    return 0;
}