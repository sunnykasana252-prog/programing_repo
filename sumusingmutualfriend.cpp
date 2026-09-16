#include <iostream>
using namespace std;

class Example {
    int a;

public:
    void geta(int);
    friend Example sum(Example, Example);
    void display(Example);
};

void Example::geta(int x) {
    a = x;
}

Example sum(Example e1, Example e2) {
    Example temp;
    temp.a = e1.a + e2.a;
    return temp;
}

void Example::display(Example e) {
    cout << "Sum = " << e.a;
}

int main() {
    Example e1, e2, e3;

    e1.geta(10);
    e2.geta(20);

    e3 = sum(e1, e2);

    e3.display(e3);

    return 0;
}