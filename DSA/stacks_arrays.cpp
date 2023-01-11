#include<iostream>
using namespace std;

class stacks{
    int *data;
    int nextIndex;
    int maxSize;

    public:
    stacks(int size){
        data = new int [size];
        nextIndex = 0;
        maxSize = size;
    }

    int size(){
        return nextIndex;
    }

    bool isEmpty(){
        return nextIndex == 0;
    }

    void push(int val){
        if(nextIndex == maxSize){
            cout<<"Stack Full "<<endl;
            return;
        }
        data[nextIndex] = val;
        nextIndex++;
    }

    int pop(){
        if(nextIndex == 0){
            cout<<"Stack Empty "<<endl;
            return INT_MIN;
        }
        nextIndex--;
        return data[nextIndex];
    }

    int top(){
        if(nextIndex == 0){
            cout<<"Stack Empty "<<endl;
            return INT_MIN;
        }
        return data[nextIndex-1];
    }
};

int main(){
    stacks var = stacks(5);
    var.push(1);
    var.push(2);
    var.push(3);
    var.push(4);
    var.push(5);
    var.push(6);
    cout<<var.pop()<<endl;
    cout<<var.pop()<<endl;
    cout<<var.pop()<<endl;
    cout<<var.pop()<<endl;
    cout<<var.pop()<<endl;
    cout<<var.pop()<<endl;

    return 0;
}