#include<bits/stdc++.h>
using namespace std;


class B;
class A
{

public:
void display(B);
};
class B
{
    int b;
public:
    void getb(int);
    friend void A::display(B);
};
void B::getb(int y)
{
    b = y;
}
void A::display(B b1)
{
    cout<<b1.b<<endl;
}
int main()
{
    A a1;
    B b1;
    b1.getb(20);
    a1.display(b1);
    return 0;
}