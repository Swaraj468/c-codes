#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
};
class LinkedList{
    Node *head;
    public:
    LinkedList(){
    head=NULL;
    }
void insertatbeg(int d){
    Node *n1 = new Node();
    n1->data=d;
    n1->next=head;
    head=n1;
}
void insertatend(int d){
    Node *n1 = new Node();
    n1->data=d;
    Node *ptr=head;
    while(ptr->next!=NULL)
    ptr=ptr->next;
    ptr->next=n1;
}
void print(){
    Node *ptr=head;
    while(ptr!=NULL){
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
}
};


int main(){

LinkedList *l1=new LinkedList();
    l1->insertatbeg(20);
    l1->insertatbeg(13);
    l1->insertatend(34);
    l1->print();
    cout<<endl;
    LinkedList *l2=new LinkedList();
    l2->insertatbeg(1);
    l2->insertatend(4);
    l2->insertatbeg(5);
    l2->insertatbeg(2);
    l1->insertatbeg(27);
    l1->print();
    cout<<endl;
    l2->print();
    cout<<endl;
return 0;
};