#include <bits/stdc++.h>
#include "TreeNode.h"
using namespace std;

// bfs
TreeNode<int> *takeInputLevelWise()
{
    int rootD;
    cout << "Enter root data ";
    cin >> rootD;
    TreeNode<int> *r = new TreeNode<int>(rootD);
    queue<TreeNode<int> *> pd;
    pd.push(r);

    while (pd.size())
    {
        cout << "Enter number of child nodes ";
        int n;
        cin >> n;
        while (n--)
        {
            cout << "Enter data ";
            int t;
            cin >> t;
            TreeNode<int> *c = new TreeNode<int>(t);
            pd.front()->children.push_back(c);
            pd.push(c);
        }
        pd.pop();
    }

    return r;
}

void print_tree_depth_wise(TreeNode<int> *r)
{
    queue<TreeNode<int> *> pd;
    pd.push(r);
    while (pd.size())
    {
        cout << pd.front()->data <<" ";
        for (auto x : pd.front()->children)
        {
            pd.push(x);
        }
        cout << endl;
        pd.pop();
    }
}

void replaceWithDepth(TreeNode<int>* &t, int depth){
    t->data = depth;

    for(auto x:t->children){
        replaceWithDepth(x,depth+1);
    }
}



int main()
{

    TreeNode<int> *r = takeInputLevelWise();
    replaceWithDepth(r,0);
    print_tree_depth_wise(r);
    

    return 0;
}