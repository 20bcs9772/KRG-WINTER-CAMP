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

void print_tree_level_wise(TreeNode<int> *r)
{
    queue<TreeNode<int> *> pd;
    pd.push(r);
    while (pd.size())
    {
        cout << pd.front()->data << ":";
        for (auto x : pd.front()->children)
        {
            cout << x->data << " ";
            pd.push(x);
        }
        cout << endl;
        pd.pop();
    }
}

bool structurallyIdentical(TreeNode<int> *r, TreeNode<int> *t){
    queue<TreeNode<int> *> pd1;
    queue<TreeNode<int> *> pd2;
    pd1.push(r);
    pd2.push(t);
    while(pd1.size() && pd2.size()){
        if(pd1.front()->data!=pd2.front()->data || pd1.front()->children.size()!=pd2.front()->children.size()) return false;
        for(auto x:pd1.front()->children){
            pd1.push(x);
        }
        for(auto y:pd2.front()->children){
            pd2.push(y);
        }

        pd1.pop();
        pd2.pop();
    }

    return true;
}



int main()
{

    TreeNode<int> *r = takeInputLevelWise();
    print_tree_level_wise(r);
    TreeNode<int> *t = takeInputLevelWise();
    print_tree_level_wise(t);
    cout<<structurallyIdentical(r,t);

    return 0;
}