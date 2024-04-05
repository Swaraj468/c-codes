#include<bits/stdc++.h>
using namespace std;

struct node {
    int data;
    node* next;
};

int main() {
    node a, b;
    a.data = 10;
    b.data = 20;
    a.next = &b;
    b.next = NULL;

    node* temp = &a;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}
