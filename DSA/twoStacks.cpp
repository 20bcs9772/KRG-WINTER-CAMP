#include<iostream>
using namespace std;

class twoStacks{
    int *data;
    int nextIndex1;
    int nextIndex2;
    int maxSize;

    public:
    twoStacks(int size){
        data = new int [size];
        nextIndex1 = 0;
        nextIndex2 = size-1;
        maxSize = size;
    }

    void push1(int val){
        if(nextIndex1 == maxSize || nextIndex1 == nextIndex2+1){
            cout<<"Stack 1 full "<<endl;
            return;
        }
        data[nextIndex1] = val;
        nextIndex1++;
    }

    void push2(int val){
        if(nextIndex2 == 0 || nextIndex2 == nextIndex1-1){
            cout<<"Stack 2 full "<<endl;
            return;
        }
        data[nextIndex2] = val;
        nextIndex2--;
    }

    int pop1(){
        if(nextIndex1 == 0){
            cout<<"Stack 1 empty "<<endl;
            return INT_MIN;
        }
        nextIndex1--;
        return data[nextIndex1];
    }

    int pop2(){
        if(nextIndex2 == maxSize){
            cout<<"Stack 2 empty "<<endl;
            return INT_MIN;
        }
        nextIndex2++;
        return data[nextIndex2];
    }

    int size1(){
        return nextIndex1;
    }

    int size2(){
        return maxSize-nextIndex2-1;
    }

};

int main(){
    twoStacks* var = new twoStacks(6);
    var->push1(2);
    var->push1(9);
    var->push2(3);
    var->push2(8);
    var->push2(4);
    var->push2(7);

    cout<<var->size1()<<endl;
    cout<<var->size2()<<endl;

    return 0;
}