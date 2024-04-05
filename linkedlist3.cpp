#include<bits/stdc++.h>
using namespace std;

struct node {
    int data;
    node* next;
};

int main() {
    // Create two nodes dynamically
    node* start =  new node, * head =  new node;
  //  node* b = new node;
  start =  head;
  head -> data = 1;
  head -> next = NULL;
  for(int i=2; i<=10; i++){
    node* temp =  new node;
    temp->data = i;
    temp -> next = NULL;
    head -> next = temp;
    head = head -> next;
  }

    // Assign values to the nodes
   /* a->data = 10;
    b->data = 20;
    a->next = b;
    b->next = NULL;
    

    // Start traversal from the head node
    node* temp = a;
*/
    // Print the linked list
    while(head != NULL) {
        cout << head->data<<" ";
        head = head->next;
    }

    // Clean up allocated memory
   // delete a;
    //delete b;

    return 0;
}
//front insert
//next=head
//head=temp

//back insert
//last->next=temp

//middle insert
//temp->next
//pos->next
//pos->next->temp

//front insert
//node*
//Inst fron(head, int data)
//{