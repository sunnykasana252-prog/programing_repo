#include <bits/stdc++.h>
using namespace std;

class B; 
class c; 

class A {
    int a;

public:
   void geta(int);

    void showA();

    friend void sum(A ,B); 
    friend void swap(A,B);
    friend void average(A,B,C);
};

class B {
    int b;

public:
    void getb(int);

    void showb();

    friend void sum(A,B);
    friend void swap(A,B);
    friend void average(A,B,C);
};
class C{
    int c;
    public:
    void getc(int);
    void showc();
    friend void average(A,B,C);


};

void A::geta(int x) {
    a = x;
}

void A::showA() {
    cout << "value of class example " << a << endl;
}

void B::getb(int y) {
    b = y;
}

void B::showb() {
    cout << "value of class test " << b << endl;
}

void sum(A A1,B B1) {
    int s = A1.a + B1.b;
    cout << "sum is " << s << endl;
}

void swap(A A1,B B1) {
    cout<<"before swap "<< A1.a<<" "<<B1.b << endl;
    int temp = A1.a ;
    A1.a= B1.b;
    B1.b=temp;
    cout << "swap is " << A1.a<<" "<<B1.b << endl;
}

int main() {

    A A1;
    A1.geta(10);
    A1.showA();

    B B1;
    B1.getb(20);
    B1.showb();

    sum(A1,B1);
    swap(A1,B1);

    return 0;
}