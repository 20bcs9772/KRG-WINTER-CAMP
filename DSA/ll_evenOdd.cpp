#include<bits/stdc++.h>
using namespace std;

class ll{
    public:
    int data;
    ll *next;

    ll(int data){
        this->data = data;
        this->next = NULL;
    }
};

void insertElement(ll *head){
    int val=1;
    cin>>val;
    while(val>0){
        ll *temp = head;
        while(temp->next!=NULL){
            temp = temp->next;
        }
        temp->next = new ll (val);
        cin>>val;
    }
}

void printll(ll *head){
    ll *temp = head;
    cout<<temp->data<<" ";
    while(temp->next!=NULL){
        temp = temp->next;
        cout<<temp->data<<" ";
    }
}

void insertHead(ll* &head,int n){
    ll *newHead = new ll (n);
    newHead->next = head;
    head = newHead;
}

void insertTail(ll *head,int n){
    ll *temp = head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next = new ll (n);
}

void deleteNode(ll* &head , ll* n){
    if(head==n){
        head = head->next;
        return;
    }
    ll *temp = head;
    while(temp->next!=n){
        temp = temp->next;
    }
    temp->next = temp->next->next; 
}

void even_odd(ll* &head,int n){
    ll *temp = head;
    while(temp->next!=NULL && n--){
        int t = temp->data;
        deleteNode(head,temp);
        if(temp->data%2==0){
            insertHead(head,t);
        } else {
            insertTail(head,t);
        }
        temp = temp->next;
        printll(head);
        cout<<endl;
    }
}

int main(){

    ll *head = new ll (1);
    insertElement(head);
    head = head->next;
    
    even_odd(head,9);
    printll(head);

    return 0;
}