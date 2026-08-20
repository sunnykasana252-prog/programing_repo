#include <bits/stdc++.h>
using namespace std;

struct node {
    int data;
    node *next;
};

node *Getnode() {
    node *p;
    p = (node *)malloc(sizeof(node));
    return p;
}

node *IntBeg(node *Head, int x) {
    node *p = Getnode();

    p->data = x;
    p->next = Head;
    Head = p;

    return Head;
}

void Traverse(node *Head) {
    node *p = Head;

    while (p != NULL) {
        cout << p->data << " , ";
        p = p->next;
    }
}

node *InsEnd(node *head, int data) {
    node *Q = Getnode();

    Q->data = data;
    Q->next = NULL;

    if (head == NULL) {
        head = Q;
    }
    else {
        node *p = head;

        while (p->next != NULL) {
            p = p->next;
        }

        p->next = Q;
    }

    return head;
}

node *InsAft(node *head, int x, int pos) {
    if (pos == 1) {
        return IntBeg(head, x);
    }

    node *p = head;

    // Move to the node at position pos - 1
    for (int i = 1; i < pos - 1 && p != NULL; i++) {
        p = p->next;
    }

    if (p == NULL) {
        cout << "Invalid position" << endl;
        return head;
    }

    node *r = Getnode();
    r->data = x;

    r->next = p->next;
    p->next = r;

    return head;
}

int main() {
    node *Head = NULL;

    Head = IntBeg(Head, 1);
    Head = IntBeg(Head, 2);
    Head = IntBeg(Head, 3);
    Head = IntBeg(Head, 4);
    Head = IntBeg(Head, 5);

    Head = InsEnd(Head, 8);

    Head = InsAft(Head, 10, 3);

    Traverse(Head);

    return 0;
}