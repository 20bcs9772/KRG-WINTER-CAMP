#include<bits/stdc++.h>
#include "TreeNode.h"
using namespace std;

// bfs
TreeNode<int>* takeInputLevelWise(){
    int rootD;
    cout<<"Enter root data ";
    cin>>rootD;
    TreeNode<int> *r = new TreeNode<int>(rootD);
    queue< TreeNode<int>* > pd;
    pd.push(r);

    while(pd.size()){
        cout<<"Enter number of child nodes ";
        int n;
        cin>>n;
        while(n--){
            cout<<"Enter data ";
            int t;
            cin>>t;
            TreeNode<int> *c = new TreeNode<int>(t);
            pd.front()->children.push_back(c);
            pd.push(c);
        }
        pd.pop();
    }

    return r;
}

void print_tree_level_wise(TreeNode<int> *r){
    queue< TreeNode<int>* > pd;
    pd.push(r);
    while(pd.size()){
        cout<<pd.front()->data<<":";
        for(auto x: pd.front()->children){
            cout<<x->data<<" ";
            pd.push(x);
        }
        cout<<endl;
        pd.pop();
    }
}

int countTreeNodesLevelWise(TreeNode<int> *r){
    int count=1;
    queue< TreeNode<int>* > pd;
    pd.push(r);
    while(pd.size()){
        for(auto x: pd.front()->children){
            pd.push(x);
            count++;
        }
        pd.pop();
    }

    return count;
}

int maxElementInTree(TreeNode<int> *r){
    int max=INT_MIN;
    queue< TreeNode<int>* > pd;
    pd.push(r);
    while(pd.size()){
        max=max>pd.front()->data?max:pd.front()->data;
        for(auto x: pd.front()->children){
            pd.push(x);
        }
        pd.pop();
    }

    return max;
}

bool containsX(TreeNode<int> *t, int n){
    if(t->data == n) return true;
    queue<TreeNode<int> * > pd;
    pd.push(t);
    while(pd.size()){
        for(auto x: pd.front()->children){
            if(x->data==n) return true;
            pd.push(x);
        }
        pd.pop();
    }

    return false;
}


// dfs
TreeNode<int>* takeInput(){
    cout<<" Enter data ";
    int d;
    cin>>d;
    TreeNode<int> *t = new TreeNode<int>(d);
    cout<<" Enter number of child nodes ";
    int n;
    cin>>n;
    while(n--){
        TreeNode<int> *c = takeInput();
        t->children.push_back(c);
    }

    return t;
}

void print_tree(TreeNode<int> *treenode){
    cout<<treenode->data<<": ";
    for(auto x : treenode->children){
        cout<<x->data<<" ";
    }
    cout<<endl;
    for(auto x : treenode->children){
        print_tree(x);
    }
}

int countTreeNodes(TreeNode<int> *treenode){
    int count=1;
    
    for(auto x : treenode->children){
        count += countTreeNodes(x);
    }

    return count;
}

int sumOfAllNodes(TreeNode<int> *treenode){
    int ans=treenode->data;
    
    for(auto x : treenode->children){
        ans += sumOfAllNodes(x);
    }

    return ans;
}

int heightOfTree(TreeNode<int> *treenode){
    int g = 0;
    
    for(auto x : treenode->children){
        int count=1;
        count += heightOfTree(x);
        g = max(g,count);
    }

    return g;
}

void printNodesAtDepthK(TreeNode<int>* t, int k){
    if(t==NULL){
        return;
    }

    if(k==0){
        cout<<t->data<<" ";
        return;
    }

    for(auto x:t->children){
        printNodesAtDepthK(x,k-1);
    }
}

void printLeafNodes(TreeNode<int>* t){
    if(t->children.size()==0){
        cout<<t->data<<" ";
        return;
    }

    for(auto x:t->children){
        printLeafNodes(x);
    }
}

void preOrder(TreeNode<int>* t){
    cout<<t->data<<" ";

    for(auto x:t->children){
        preOrder(x);
    }
}


void postOrder(TreeNode<int>* t){

    for(auto x:t->children){
        postOrder(x);
    }

    cout<<t->data<<" ";
}

int main(){
    // TreeNode<int> *t = new TreeNode<int>(7);
    // TreeNode<int> *y = new TreeNode<int>(8);
    // TreeNode<int> *u = new TreeNode<int>(9);
    // TreeNode<int> *a = new TreeNode<int>(1);
    // TreeNode<int> *s = new TreeNode<int>(2);
    // TreeNode<int> *d = new TreeNode<int>(3);

    // t->children.push_back(y);
    // t->children.push_back(u);
    // u->children.push_back(a);
    // u->children.push_back(s);
    // y->children.push_back(d);

    // TreeNode<int> *r = takeInput();
    // print_tree(r);
    // cout<<countTreeNodes(r)<<endl;

    TreeNode<int> *r = takeInputLevelWise();
    print_tree_level_wise(r);
    // cout<<countTreeNodesLevelWise(r)<<endl;
    // cout<<sumOfAllNodes(r)<<endl;
    // cout<<maxElementInTree(r)<<endl;
    // cout<<heightOfTree(r)<<endl;
    // printNodesAtDepthK(r,2);
    // cout<<endl;
    // printLeafNodes(r);
    // cout<<endl;
    // preOrder(r);
    // cout<<endl;
    // postOrder(r);
    cout<<containsX(r,4);
    return 0;
}