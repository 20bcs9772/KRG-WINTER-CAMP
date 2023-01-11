#include<bits/stdc++.h>
using namespace std;

template <typename T>
class QueuesUsingArray {

    T *data;
    int nextIndex;
    int firstIndex;
    int size;
    int maxSize;

    public:
    QueuesUsingArray(int s){
        data = new T[s];
        nextIndex = 0;
        firstIndex = -1;
        size = 0;
        maxSize = s;
    }

    int getSize(){
        return size;
    }

    bool isEmpty(){
        return size==0;
    }

    void enqueue(T el){
        if(size == maxSize){
            cout<<"Queue is full :( "<<endl;
            return;
        }

        data[nextIndex] = el;
        nextIndex = (nextIndex+1)%maxSize;
        size++;
        if(firstIndex == -1) firstIndex=0;
        return;
    }

    T dequeue(){
        if(isEmpty()){
            cout<<"Queue is empty : "<<endl;
            firstIndex=-1;
            nextIndex = 0;
            return 0;
        }

        T temp = data[firstIndex];
        firstIndex = (firstIndex+1)%maxSize;
        size--;
        return temp;
    }

    T front(){
        if(firstIndex==-1) return 0;
        return data[firstIndex];
    }

    T rear(){
        return data[nextIndex-1];
    }

    void print_q(){

        int tempIndex = firstIndex;
        int i=0;
        while(i<size){
            cout<<data[tempIndex]<<" ";
            tempIndex = (tempIndex+1)%maxSize;
            i++;
        }
        cout<<endl;
    }
};

int main(){

    QueuesUsingArray<int> q = QueuesUsingArray<int>(5);
    q.enqueue(6);
    q.enqueue(3);
    q.enqueue(5);
    q.enqueue(8);
    q.enqueue(1);
    q.print_q();
    cout<<q.dequeue()<<endl;
    q.print_q();
    q.enqueue(5);
    q.enqueue(8);
    q.print_q();

    return 0;
}