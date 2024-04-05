#include<bits/stdc++.h>
using namespace std;

struct node {
    int data;
    node* next;
};

int main() {
    // Create two nodes dynamically
    node* a = new node;
    node* b = new node;

    // Assign values to the nodes
    a->data = 10;
    b->data = 20;
    a->next = b;
    b->next = NULL;
    

    // Start traversal from the head node
    node* temp = a;

    // Print the linked list
    while(temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    // Clean up allocated memory
   // delete a;
    //delete b;

    return 0;
}
