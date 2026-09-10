#include <bits/stdc++.h>
using namespace std;

class Example{
    int a,b;
    public:
    void getab(int ,int);
    void display();
    friend void average(Example);
};

void Example::getab(int x,int y){
    a=x;
    b=y;
    
}
void Example::display(){
    cout<<a<<" "<<b<<endl;
}

void average(Example E){
    int avg=(E.a+E.b)/2;
    cout<<avg;
}

int main() {
	Example E1;
	E1.getab(10,20);
	E1.display();
	average(E1);

}
