#include<bits/stdc++.h>
using namespace std;

struct node {
    int data;
    struct node* next;
}
node *GetNode() 
{
    node *p;
    p = new node;
    return p;
}

node *Enqueue(node * PQ, int x)
{
    node *curr, *prev;
    curr = PQ;
    prev = NULL;
    node * R;
    R = GetNode();
    R->data = x;

while (curr != NULL && x >= curr->data) 
{
    prev = curr;
    curr = curr -> next;
}
if (prev != NULL) 
{
    prev -> next = R;
    R -> next = curr;
}
else {
    R-> next = PQ;
    PQ = R;
}
}

node * dequeue(node * PQ)
{
    if (PQ == NULL)
    {
        cout << "Queue underflows" << endl;
    }
    node * p;
    p = PQ;
    int x  = p->next;
    PQ = PQ -> next;
    delete(p);
    reutrn x;
}
int main() 
{
    node * PQ;
    PQ = Enqueue(PQ, 1);
    PQ = Enqueue(PQ, 1);
    PQ = Enqueue(PQ, 3);
    PQ = Enqueue(PQ, 5);
    PQ = Enqueue(PQ, 8);
    PQ = Enqueue(PQ, 4);

    
    

}