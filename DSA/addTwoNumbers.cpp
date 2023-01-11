class Solution {
public:
void insertatTail(ListNode* &head, int val){
    ListNode* n= new ListNode(val);
     if(head==NULL){
        head=n;
        return;
    }
    ListNode* temp=head;
    while(temp->next !=NULL){
        temp= temp->next;
    }
    temp->next=n;
}
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    ListNode* temp1= l1;
    ListNode* temp2= l2;
    ListNode* head3= NULL;
    int a=0;
    int b=0;
    while(temp1!= NULL || temp2!=NULL){
        a=b;
        if(temp1) a+=temp1->val;
        if(temp2) a+=temp2->val;
        if(a>=10){
            a= a%10;
            b=1;
            insertatTail(head3, a);
        }
        else{
            insertatTail(head3, a);
            b=0;
        }
        if(temp1) temp1= temp1-> next;
        if(temp2) temp2= temp2->next;
    }
    if(b){
        insertatTail(head3,b);
    }
    return head3;
    }
};
