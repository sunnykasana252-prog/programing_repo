#include <bits/stdc++.h>
using namespace std;

class Rectangle; 


class Circle {
    int r;

public:
   void getr(int);

    void showr();

   friend class Rectangle;
   void compare(Circle,Rectangle);
    
    
};

class Rectangle {
    int l,b;

public:
    void getlb(int,int);

    void showlb();

    friend class Circle;
    void compare(Circle,Rectangle);
};


void Circle::getr(int x) {
    r = x;
}

void Circle::showr() {
    cout << "value of class A " << r << endl;
}

void Rectangle::getlb(int y,int z) {
    l= y;
    b=z;
}

void Rectangle::showlb() {
    cout << "value of class B " <<l<<" "<< b << endl;
}
void Circle::compare(Circle c1,Rectangle r1){
    if((c1.r*3.14*c1.r)>(r1.l*r1.b)){
     cout<<"circle is greater "<<endl;
    }
    else{
        cout<<"rectangle is greater "<<endl;
    }
}




int main() {

    Circle C1;
    C1.getr(10);
    C1.showr();

    Rectangle B1;
    B1.getlb(20,30);
    B1.showlb();

    C1.compare(C1,B1);

    

    return 0;
}