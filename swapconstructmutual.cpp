#include<bits/stdc++.h>
using namespace std;

class Test;   

class Example {
    int a;

public:
    Example(int);

    void displayA();

    
    void sum(Test);
    void swapValues(Test&);
};

class Test {
    int b;

public:
    Test(int);

    void displayb();

   
    friend void Example::sum(Test);
    friend void Example::swapValues(Test&);
};

Example::Example(int x) {
    a = x;
}

void Example::displayA() {
    cout << "Value of a = " << a << endl;
}

Test::Test(int y) {
    b = y;
}

void Test::displayb() {
    cout << "Value of b = " << b << endl;
}


void Example::sum(Test T1) {
    int s = a + T1.b;
    cout << "Sum is " << s << endl;
}


void Example::swapValues(Test& T1) {
    int temp = a;
    a = T1.b;
    T1.b = temp;
}

int main() {

    Example E1(10);
Test T1(20);

    cout << "Before swap:" << endl;
    E1.displayA();
  T1.displayb();

    E1.swapValues(T1);

     cout << "After swap:" << endl;
    E1.displayA();
    T1.displayb();

    E1.sum(T1);

    return 0;
}