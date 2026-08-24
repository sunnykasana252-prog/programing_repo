#include <bits/stdc++.h>
using namespace std;

struct node {
    int data;
    node* next;
};

// Create a new node
node* Getnode() {
    node* p = new node;
    return p;
}

// Insert for any diesered position element into Priority Queue
node* EnQueue(node* PQ, int x) {
    node* curr = PQ;
    node* prev = NULL;

    node* r = Getnode();
    r->data = x;
    r->next = NULL;

    //this is forArrange elements in ascending order
    while (curr != NULL && x >= curr->data) {
        prev = curr;
        curr = curr->next;
    }

    //this  Insert  node at the correct position
    if (prev != NULL) {
        prev->next = r;
        r->next = curr;
    } 
    else {
        r->next = PQ;
        PQ = r;
    }

    return PQ;
}

// Remove the highest priority element (first element)
node* DeQueue(node* PQ) {
    if (PQ == NULL) {
        cout << "Priority Queue Underflow" << endl;
        return NULL;
    }

    node* p = PQ;
    cout << "Deleted element: " << p->data << endl;

    PQ = PQ->next;
    delete p;

    return PQ;
}

// Display Priority Queue
void Display(node* PQ) {
    node* p = PQ;

    while (p != NULL) {
        cout << p->data << " ";
        p = p->next;
    }

    cout << endl;
}

int main() {
    node* PQ = NULL;

    // Enqueue elements
    PQ = EnQueue(PQ, 4);
    PQ = EnQueue(PQ, 5);
    PQ = EnQueue(PQ, 6);
    PQ = EnQueue(PQ, 7);

    cout << "Priority Queue: ";
    Display(PQ);

    // Dequeue
    PQ = DeQueue(PQ);

    cout << "After DeQueue: ";
    Display(PQ);

    return 0;
}