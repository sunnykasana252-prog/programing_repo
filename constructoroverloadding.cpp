#include<bits/stdc++.h>
using namespace std;

class Example
{
    int a;
    int b;

public:
    Example();
    Example(int, int);
    Example( Example&);
    void display();
};


Example::Example()
{
    cout<<"enter the no";
    cin>>a>>b;
}


Example::Example(int x, int y)
{
    a = x;
    b = y;
}


Example::Example( Example& E1)
{
    a = E1.a;
    b = E1.b;
}


void Example::display()
{
    cout << a << " " << b << endl;
    cout << "sum = " << a + b << endl;
    cout << "multiply = " << a * b << endl;
}

int main()
{

    Example E1;
    E1.display();


    Example E2(10, 200);
    E2.display();

      Example E3(E1);
    E3.display();

    
    Example E4(E2);
    E3.display();

    return 0;
}