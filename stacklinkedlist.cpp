#include <bits/stdc++.h>
using namespace std;

struct node {
    int data;
    node *next;
};

node *Getnode() {
    node *p = (node *)malloc(sizeof(node));
    return p;
}

node *IntBeg(node *Head, int x) {
    node *p = Getnode();

    p->data = x;
    p->next = Head;
    Head = p;

    return Head;
}

node *InsEnd(node *Head, int x) {
    node *p = Getnode();

    p->data = x;
    p->next = NULL;

    if (Head == NULL)
        return p;

    node *q = Head;

    while (q->next != NULL)
        q = q->next;

    q->next = p;

    return Head;
}

node *DelBeg(node *Head) {

    if (Head == NULL) {
        cout << "Stack is empty" << endl;
        return NULL;
    }

    node *p = Head;
    Head = Head->next;

    int x = p->data;
    cout << "DelBeg node is " << x << endl;

    delete p;

    return Head;
}

void Traverse(node *Head) {
    node *p = Head;

    while (p != NULL) {
        cout << p->data << " , ";
        p = p->next;
    }

    cout << endl;
}

node *Push(node *Top, int x) {
    Top = IntBeg(Top, x);
    return Top;
}

/
int StackTop(node *Top) {

    if (Top == NULL) {
        cout << "Stack is empty" << endl;
        return -1;
    }

    return Top->data;
}


int Pop(node *&Top) {

    if (Top == NULL) {
        cout << "Stack is empty" << endl;
        return -1;
    }

    node *p = Top;

    int x = p->data;

    Top = Top->next;

    cout << "Popped element is: " << x << endl;

    free(p);

    return x;
}

bool IsEmpty(node *Top) {
    if (Top == NULL) {
        return true;
    }
    else {
        return false;
    }
}

int main() {

    node *Top = NULL;

   
    Top = Push(Top, 10);
    Top = Push(Top, 20);
    Top = Push(Top, 30);

    cout << "Stack: ";
    Traverse(Top);

    
    cout << "Stack Top = " << StackTop(Top) << endl;

    
    cout << "Popped = " << Pop(Top) << endl;

    cout << "Stack after pop: ";
    Traverse(Top);

    
    if (IsEmpty(Top))
        cout << "Stack is empty" << endl;
    else
        cout << "Stack is not empty" << endl;

    return 0;
}


