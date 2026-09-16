#include <bits/stdc++.h>
using namespace std;
class B;
class A{
    int a;
    public:
    
    void geta(int);
    void showa();
    friend class B;
    void displayB(B);
};

class B{
     int b;
    public:
    
    void getb(int);
    void showb();
    friend class A;
    void displayA(A);
    
};

void A::geta(int x){
    a=x;
    
}
void A::showa{
    cout<<a<<endl;
}

void B::getb(int y){
    b=y;
}

void B::show(){
    cout<<b<<endl;
}
void A::dispalyB(B B1){
    cout<<B1.b<<endl;
}
void B::displayA(A A1){
    cout<<A1.a<<endl;
}


int main() {
    A x;
    x.geta(10);
    x.show();
    B y;
    y.getb(20);
    y.show();



}
