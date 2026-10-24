#include <bits/stdc++.h>
using namespace std;

class B; 


class A {
    int a;

public:
   void geta(int);

    void showA();

   friend class B;
    void displayB(B);
    
};

class B {
    int b;

public:
    void getb(int);

    void showb();

    friend class A;
    void displayA(A);
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

void A::displayB(B B1){
    cout<<"dispay value of class b using mutual friend in a "<<B1.b<<endl;
}

void B::displayA(A A1){
    cout<<"dispay value of class a using mutual friend in b "<<A1.a<<endl;
}


int main() {

    A A1;
    A1.geta(10);
    A1.showA();

    B B1;
    B1.getb(20);
    B1.showb();

    A1.displayB(B1);
    B1.displayA(A1);

    

    return 0;
}