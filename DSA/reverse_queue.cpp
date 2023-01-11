#include<bits/stdc++.h>
using namespace std;

void insert_start(queue<int> &q){
    if(q.empty()){
        return;
        } else {
        int val = q.front();
        q.pop();
        insert_start(q);
        q.push(val);
    }
}

// void reverse_queue(queue<int> &q){
//     if(q.size()){

//     }
// }

int main(){
    int n;
    cin>>n;
    queue<int> q;
    while(n--){
        int g;
        cin>>g;
        q.push(g);
    }

    insert_start(q);

    while(q.size()){
        cout<<q.front()<<" ";
        q.pop();
    }


    return 0;
}