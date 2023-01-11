#include <bits/stdc++.h>
using namespace std;

int main(){

    stack<char> n;
    string ans = "((())(())";
    bool val = true;

    for(auto x:ans){
        if(x==')' && n.top()=='('){
            n.pop();
            val = true;
        } else if(x=='('){
            n.push(x);
        } else{
            val = false;
            break;
        }
    }

    if(n.size()!=0){
        val = false;    
    }

    cout<<val<<endl;

    return 0;
}