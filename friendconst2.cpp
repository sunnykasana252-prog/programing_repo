#include <bits/stdc++.h>
using namespace std;

class Test;  

class Example {
    int a;

public:
    Example(int);

    void displayA();

    void sum(Example ,Test); 
};

class Test {
    int b;

public:
    Test(int);

    void displayb();

    friend void Example::sum(Example,Test);
};

Example::Example(int x) {
    a = x;
}

void Example::displayA() {
    cout << "value of class example " << a << endl;
}

Test::Test(int y) {
    b = y;
}

void Test::displayb() {
    cout << "value of class test " << b << endl;
}

void Example::sum(Example E1,Test T1) {
    int s = E1.a + T1.b;
    cout << "sum is " << s << endl;
}

int main() {

    Example E1(10);
    E1.displayA();

    Test T1(20);
    T1.displayb();

    E1.sum(E1,T1);

    return 0;
}