#include<bits/stdc++.h>
using namespace std;

// not working
//  to print number of elements less than or equal to an element in left side
// Sample Input 2:
// 8
// 60 70 80 100 90 75 80 120

// Sample Output 2:
// 1 2 3 4 1 1 2 8

void calc_stock(stack<int> s, int i,int count){
    if((s.top()>=i) || (!s.size())){
        cout<<"c"<<count+1<<endl;
        return;
    }
    s.pop();
    cout<<i<<" "<<s.size()<<" "<<count<<endl;
    calc_stock(s,i,count+1);
}

void stock_span(stack<int> &s){
    if(!s.size()){
        return;
    }
    calc_stock(s,s.top(),0);
    s.pop();
    stock_span(s);
}

int main(){
    stack<int> s;
    int n;
    cin>>n;
    while(n--){
        int val;
        cin>>val;
        s.push(val);
    }

    stock_span(s);

    return 0;
}