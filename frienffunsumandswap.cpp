#include <bits/stdc++.h>
using namespace std;
class Test;
class Example{
    int a;
    public:
        void geta(int);
        void Adisplay();
        friend void swap(Example&,Test&);
};  
class Test{
    int b;
    public:
        void getb(int);
        void Bdisplay();
        friend void swap(Example&,Test&);
};
void Example::geta(int x){
    a=x;
}
void Example::Adisplay(){
    cout << "a: " << a << endl;
}
void Test::getb(int y){
    b=y;
}
void Test::Bdisplay(){
    cout << "b: " << b << endl;
}
void swap(Example &e, Test &t){
    int temp=e.a;
    e.a=t.b;
    t.b=temp;
}
int main(){
    Example E1;
    Test T1;
    E1.geta(10);
    T1.getb(20);
    cout << "Before Swap: " << endl;
    E1.Adisplay();
    T1.Bdisplay();
    swap(E1,T1);
    cout << "After Swap: " << endl;
    E1.Adisplay();
    T1.Bdisplay();
}b 