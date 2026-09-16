#include <iostream>
using namespace std;

class Example {
    int a;

public:
    void geta(int);
     Example sum(Example, Example);
    void display(Example);
};

void Example::geta(int x) {
    a = x;
}

Example Example::sum(Example e1, Example e2) {
    Example s;
    s.a = e1.a + e2.a;
    return s;
}

void Example::display(Example e) {
    cout << "Sum = " << e.a;
}

int main() {
    Example e1, e2, e3,R;

    e1.geta(10);
    e2.geta(20);

    R = e3.sum(e1, e2);

    e3.display(R);

    return 0;
}