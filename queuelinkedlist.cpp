#include <bits/stdc++.h>
using namespace std;

struct node {
    int data;
    node* next;
};

node* front = NULL;
node* rear = NULL;

void initialize() {
    front = NULL;
    rear = NULL;
}

bool IsEmpty() {
    return front == NULL;
}

void EnQueue(int x) {
    node* newNode = new node;
    newNode->data = x;
    newNode->next = NULL;

    if (IsEmpty()) {
        front = rear = newNode;
    } else {
        rear->next = newNode;
        rear = newNode;
    }
}

int DeQueue() {
    if (IsEmpty()) {
        return -1;  // Queue is empty
    }

    node* temp = front;
    int x = temp->data;

    front = front->next;

    if (front == NULL) {
        rear = NULL;
    }

    delete temp;
    return x;
}

int main() {
    initialize();

    EnQueue(10);
    EnQueue(20);
    EnQueue(30);

    cout << DeQueue() << endl;  // 10
    cout << DeQueue() << endl;  // 20

    return 0;
}