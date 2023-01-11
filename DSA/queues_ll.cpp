#include<bits/stdc++.h>
using namespace std;

template<typename T>
class qnode{
    public:
    T data;
    qnode<T>* next;

    qnode(T d){
        this->data = d;
        next = NULL;
    }
};

template <typename T>
class queuell{
    qnode<T> *front, *rear;
    int size;

    public:
    queuell(){
        front = NULL;
        rear = NULL;
        size=0;
    }

    void enqueue(T el){
        qnode<T> *temp = new qnode<T>(el);
        size++;
        if(rear == NULL){
            this->front = temp;
            this->rear = temp;
            return;
        }
        rear->next = temp;
        rear = temp;
    }

    T dequeue(){
        if(this->front == NULL){
            cout<<"Queue is empty :(";
            return 0;
        }
        T a = front->data;
        front = front->next;
        if(front == NULL){
            rear = NULL;
        }
        size--;
        return a;
    }

    int getSize(){
        return size;
    }

    bool isEmpty(){
        return size == 0;
    }

};


int main(){

    queuell<int> q = queuell<int>();
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    cout<<q.getSize()<<endl;
    cout<<q.isEmpty()<<endl;
    cout<<q.dequeue()<<endl;
    cout<<q.dequeue()<<endl;
    cout<<q.dequeue()<<endl;
    cout<<q.dequeue()<<endl;
    cout<<q.getSize()<<endl;

    return 0;
}