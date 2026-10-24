#include<iostream>
using namespace std;
class Example{
    int a,b;
    public:
    Example();
    Example(Example&);
    void display();
};
Example::Example(){
    a=10;
    b=20;
}
Example::Example(Example &E){
    a=E.a;
    b=E.b;
}
void Example::display(){
    cout<<a<<b<<endl;
}
int main(){
    Example E1;
    E1.display();
    Example E2(E1);
    E2.display();
    return 0;
}
/// this approch is also called constructor overloading.