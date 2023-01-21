#include <bits/stdc++.h>
#include "../BinaryTreeNode.h"
using namespace std;

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

bool searchBT(BinaryTreeNode<int> *root, int v)
{
    if (!root)
        return false;
    if (root->data == v)
    {
        return true;
    }
    return searchBT(root->left, v) || searchBT(root->right, v);
}

bool lca(BinaryTreeNode<int> *root, int x, int y, vector<int> &arr)
{
    if (!root) return false;
    if ((root->data == y || root->data == x) && (searchBT(root, x) && searchBT(root, y)))
    {
        arr.push_back(root->data);
        return true;
    }
    else
    {
        if (searchBT(root, x) && searchBT(root, y)) arr.push_back(root->data);

        bool c = lca(root->left, x, y, arr);
        bool p = lca(root->right, x, y, arr);
        return c||p;
    }
}

int main()
{

    BinaryTreeNode<int> *root = inputBTree();
    vector<int> arr;
    lca(root,2,6,arr);
    cout<<( arr.size()>0 ? arr[arr.size()-1] : -1 )<<endl;

    return 0;
}