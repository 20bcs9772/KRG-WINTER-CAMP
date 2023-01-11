#include <bits/stdc++.h>
using namespace std;

template <typename T>
class Node{
    public:
    T data;
    Node<T>* next;

    Node(T data){
        this->data = data;
        next = NULL;
    }
};

template <typename T>
class Stack{
    Node<T>* head;
    int size;

    public:
    Stack(){
        head = NULL;
        size = 0;
    }

    int getSize(){
        return size;
    }

    bool isEmpty(){
        return size == 0;
    }

    void push(T element){
        Node<T> *temp = new Node<T>(element);
        temp->next = head;
        head = temp;
        size++;
        return;
    }

    T pop(){
        if(isEmpty()){
            return 0;
        }
        T val = head->data;
        head = head->next;
        size = size==0 ? 0: size-- ;
        return val;
    }

    T top(){
        if(isEmpty()){
            return 0;
        }
        return head->data;
    }
};

int main(){
    Stack<char> newStack ;
    newStack.push('s');
    newStack.push('w');
    newStack.push('f');
    newStack.push('h');

    cout<< newStack.top()<< endl;
    cout<< newStack.getSize()<< endl;
    cout<< newStack.pop()<< endl;
    cout<< newStack.pop()<< endl;
    cout<< newStack.pop()<< endl;
    cout<< newStack.top()<< endl;
    cout<< newStack.getSize()<< endl;
    cout<< newStack.isEmpty()<< endl;
    cout<< newStack.pop()<< endl;
    cout<< newStack.getSize()<< endl;

    return 0;
}