#include<iostream>
using namespace std;
class Test;
class Example{
    int a;
    public:
  void  geta(int);
  void Adisplay();
  friend int sum(Example,Test);
};
void Example::geta(int x){
    a=x;
}
void Example::Adisplay(){
    cout<<"\nthe value of a is :"<<a<<endl;
}

class Test{
int b;
    public:
  void  getb(int);
  void Bdisplay();
  friend int sum(Example,Test);
};
void Test::getb(int y){
    b=y;
}
void Test::Bdisplay(){
    cout<<"\nthe value of a is :"<<b<<endl;
}
int sum(Example E,Test T){
    int s=E.a+T.b;
    return s;
}

int main(){
    Example E1;
    E1.geta(10);
    E1.Adisplay();
    Test T1;
    T1.getb(20);
    T1.Bdisplay();
    int res=sum(E1,T1);
    cout<<"the sum of class example and test :"<<res<<endl;
}