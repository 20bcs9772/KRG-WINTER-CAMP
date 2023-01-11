#include<bits/stdc++.h>
using namespace std;
#include"QueuesUsingArray.h"

int main(){

    QueuesUsingArray<int> q = QueuesUsingArray<int>(5);
    q.enqueue(4);
    q.enqueue(5);
    q.enqueue(6);
    q.enqueue(7);
    q.enqueue(8);
    q.enqueue(9);
    cout<<q.front()<<endl;
    cout<<q.rear()<<endl;
    cout<<q.dequeue()<<endl;
    cout<<q.dequeue()<<endl;
    cout<<q.dequeue()<<endl;
    cout<<q.dequeue()<<endl;
    cout<<q.dequeue()<<endl;
    cout<<q.front()<<endl;
    cout<<q.rear()<<endl;
    return 0;
}