#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    /*Node(int data){
        this -> data = data;
        this -> next = NULL;

    }*/

};
class LinkedList
{
    Node *head;
    public:
    LinkedList()
    {
        head=NULL;
    }
    void insertAtBeg(int d)
    {
        Node *n1=new Node();
        n1->data=d;
        n1->next=head;
        head=n1;
    }
    void insertAtEnd(int d)
    {
        Node *n1=new Node();
        n1->data=d;
        Node *ptr=head;
        while(ptr->next!=NULL)
        ptr=ptr->next;
        ptr->next=n1;

    }
    void insertAtMid(int d) {
    // Create a new node
    Node *n1 = new Node();
    n1->data = d;

    // If the list is empty, the new node becomes the head
    if (head == nullptr) {
        head = n1;
    } else {
        Node *slow = head;
        Node *fast = head;

        // Use two pointers, 'slow' will move one step at a time,
        // 'fast' will move two steps at a time
        while (fast->next != nullptr && fast->next->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
        }

        // 'slow' is now at the midpoint, insert the new node after 'slow'
        n1->next = slow->next;
        slow->next = n1;
    }
}

   
    void print()
    {
        Node *ptr=head;
        while(ptr!=NULL)
        {
            cout<<ptr->data<<" ";
            ptr=ptr->next;
        }
    }
};



int main(){
    LinkedList *l1=new LinkedList();
    l1->insertAtBeg(20);
    l1->insertAtBeg(13);
    l1->insertAtEnd(34);
    l1->print();
    cout<<endl;
    LinkedList *l2=new LinkedList();
    l2->insertAtBeg(1);
    l2->insertAtEnd(4);
    l2->insertAtBeg(5);
    l2->insertAtBeg(2);
    l1->insertAtBeg(27);
    l1->print();
    cout<<endl;
    l2->print();
    cout<<endl;
    // l2->InsertAtMid(3,90);
    // l2->print();
    // cout<<endl;
  
    // ... (rest of your main function)

    l2->insertAtMid(90);
    l2->print();
    cout << endl;

    return 0;
};



