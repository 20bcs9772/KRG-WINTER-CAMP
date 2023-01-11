#include<bits/stdc++.h>
using namespace std;

void insert_bottom(stack<int>& s,int x){
    if(s.size()==0){
        s.push(x);
    } else {
    int val = s.top();
    s.pop();
    insert_bottom(s,x);
    s.push(val);
    }
}

void reverse_stack(stack<int>& s){
    if(s.size()){
        int val = s.top();
        s.pop();
        reverse_stack(s);
        insert_bottom(s,val);
    }
}

int main(){
    int n;
    cin>>n;
    stack<int> s;
    int temp = n;
    while(temp--){
        int a;
        cin>>a;
        s.push(a);
    }

    reverse_stack(s);

    while(s.size()){
        cout<<s.top()<<" ";
        s.pop();
    }

    return 0;
}