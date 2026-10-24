#include <bits/stdc++.h>
using namespace std;

class B; 


class A {
    int a;

public:
   void geta(int);

    void showA();

   friend class B;
    void max(A,B);
    
};

class B {
    int b;

public:
    void getb(int);

    void showb();

    friend class A;
  
};


void A::geta(int x) {
    a = x;
}

void A::showA() {
    cout << "value of class A " << a << endl;
}

void B::getb(int y) {
    b = y;
}

void B::showb() {
    cout << "value of class B " << b << endl;
}

void A::max(A A1,B B1){
    if(A1.a>B1.b)
    cout<<"a is max "<<endl;
    else
    cout<<"b is max"<<endl;
}



int main() {

    A A1;
    A1.geta(10);
    A1.showA();

    B B1;
    B1.getb(20);
    B1.showb();

    A1.max(A1,B1);

    

    return 0;
}