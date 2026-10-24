#include<bits/stdc++.h>
using namespace std;
class Example{
    int a;
    int b;
    public:
   Example(int x,int y){
    a=x;
    b=y;
}
    void display();

};


void Example::display(){
    cout<<a<<" "<<b<<endl;
    cout<<"sum "<<a+b<<endl;
    cout<<"multiply "<<a*b<<endl;
}

int main(){
    Example E1=Example(10,200);
    E1.display();
    Example E2(60,120);
    E2.display();
}