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

node *InsAft(node *Head, int x, int pos) {
    node *p = Getnode();
    p->data = x;

    if (Head == NULL)
        return p;

    node *q = Head;

    // Move to the node at position pos
    for (int i = 1; i < pos && q != NULL; i++)
        q = q->next;

    if (q == NULL) {
        free(p);
        return Head;
    }

    p->next = q->next;
    q->next = p;

    return Head;
}

node *DelBeg(node *Head) {
    

    node *p = Head;
    Head = Head->next;
    int x=p->data;
    cout<<"DelBeg  node is "<<x<<endl;

    delete(p);

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

int main() {
    node *Head = NULL;

    Head = IntBeg(Head, 5);
    Head = InsEnd(Head, 8);
    

    Traverse(Head);

    Head = DelBeg(Head);

    Traverse(Head);

    return 0;
}