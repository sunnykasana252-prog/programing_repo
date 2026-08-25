#include <bits/stdc++.h>
using namespace std;

struct node {
    int data;
    node *next;
    node *prev;
};

// ***************************************/
node *Left ;
node *Right ;

// ***************************************/
node* Getnode() {
    node *p = new node;
    p->next = NULL;
    p->prev = NULL;
    return p;
}

// ***************************************/
void Insleft(int x) {
    node *p = Getnode();
    p->data = x;

    p->next = Left;

    if (Left != NULL)
        Left->prev = p;
    else
        Right = p;

    Left = p;
}

// ***************************************/
void Insright(int x) {
    node *p = Getnode();
    p->data = x;

    p->prev = Right;

    if (Right != NULL)
        Right->next = p;
    else
        Left = p;

    Right = p;
}
int Delleft(){
    node *p=Left;
    Left=Left->next;
    if(Left!=NULL){
        Left->prev=NULL;
    }
    else{
        Right=NULL;
    }

    int x=p->data;
    delete(p);
    return x;


}

int Delright(){
   node *p=Right;
    Right=Right->prev;
    if(Right!=NULL){
        Right->next=NULL;
    }
    else{
        Left=NULL;
    }

    int x=p->data;
    delete(p);
    return x;
}

// ***************************************/
void display() {
    node *p = Left;

    cout << "Doubly Linked List: ";
    while (p != NULL) {
        cout << p->data << " ";
        p = p->next;
    }
    cout << endl;
}

int main() {
    
    Left = NULL;
    Right = NULL;

    Insleft(5);
    Insleft(4);
    Insleft(3);
    Insleft(2);
    Insright(6);
    Insright(7);
    Delleft();
    Delright();
    display();

    return 0;
}