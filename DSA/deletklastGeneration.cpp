#include <bits/stdc++.h>
#include "../BinaryTreeNode.h"
using namespace std;

BinaryTreeNode<int>* deletelastgeneration(BinaryTreeNode<int>* root){
    if(!root)return root;  
    if((!root->left) && (!root->right)){ // If the node is a leaf node. Delete the node and return NULL.
        free(root);
        return NULL;
    }
    root->left=deletelastgeneration(root->left); // Recursively delete the leaf nodes from left subtree.
    root->right=deletelastgeneration(root->right); // Recursively delete the leaf nodes from right subtree.
    return root;
}

void printBTree(BinaryTreeNode<int> *root)
{
    if (!root)
        return;
    queue<BinaryTreeNode<int> *> pd;
    pd.push(root);
    while (pd.size())
    {
        cout << pd.front()->data << " ";
        if (pd.front()->left)
        {
            cout << "L" << pd.front()->left->data << " ";
            pd.push(pd.front()->left);
        }
        if (pd.front()->right)
        {
            cout << "R" << pd.front()->right->data << " ";
            pd.push(pd.front()->right);
        }
        cout << endl;
        pd.pop();
    }
}

BinaryTreeNode<int> *inputBTree()
{
    cout << "Enter data : ";
    int n;
    cin >> n;
    if (!n)
        return NULL;
    BinaryTreeNode<int> *root = new BinaryTreeNode<int>(n);
    queue<BinaryTreeNode<int> *> pd;
    pd.push(root);
    while (pd.size())
    {
        int l, r;
        cout << "Enter L data : ";
        cin >> l;
        if (l)
        {
            pd.front()->left = new BinaryTreeNode<int>(l);
            pd.push(pd.front()->left);
        }
        cout << "Enter R data : ";
        cin >> r;
        if (r)
        {
            pd.front()->right = new BinaryTreeNode<int>(r);
            pd.push(pd.front()->right);
        }
        pd.pop();
    }

    return root;
}



int main()
{

    BinaryTreeNode<int> *root = inputBTree();
    root = deletelastgeneration(root);
    printBTree(root);
    // printBTree(root);
    // vector<int> arr;
    // lca(root,6,2,arr);
    // cout<<arr[arr.size()-1]<<endl;
    // for(auto x:arr) cout<<x<<" ";

    return 0;
}