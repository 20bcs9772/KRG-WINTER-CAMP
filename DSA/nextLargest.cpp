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

int nextLargest(TreeNode<int> *t, int n){
    int ans = INT_MAX;
    queue<TreeNode<int>*> pd;
    pd.push(t);
    while(pd.size()){
        if (n<pd.front()->data) ans=min(ans,pd.front()->data);
        for(auto x:pd.front()->children){
            pd.push(x);
        }

        pd.pop();
    }

    return ans;
}



int main()
{

    TreeNode<int> *r = takeInputLevelWise();
    print_tree_level_wise(r);
    cout<<nextLargest(r,21);

    return 0;
}