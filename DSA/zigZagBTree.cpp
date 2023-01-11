#include<bits/stdc++.h>
#include"BinaryTreeNode.h"
using namespace std;

void zigzag(BinaryTreeNode<int>* root){
    stack<BinaryTreeNode<int>*> s,q;
    q.push(root);
    while(q.size() || s.size()){
            while(q.size()){
            cout<<q.top()->data<<" ";
                if(q.top()->left) s.push(q.top()->left);
                if(q.top()->right) s.push(q.top()->right);
                q.pop();
            }
            while(s.size()){
            cout<<s.top()->data<<" ";
                if(s.top()->right) q.push(s.top()->right);
                if(s.top()->left) q.push(s.top()->left);
                s.pop();
            }
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
    zigzag(root);

    return 0;
}