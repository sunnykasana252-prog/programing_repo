#include <iostream>
using namespace std;

class Startup {
    int a;
    string name;

public:
    void geta(int);
    friend Startup sum(Startup, Startup, Startup);
    void display(Startup);
};

void Startup::geta(int x) {
    a = x;
}

Startup sum(Startup s1, Startup s2, Startup s3) {
    Startup temp;
    temp.a = s1.a + s2.a + s3.a;
    return temp;
}

void Startup::display(Startup s) {
    if(s.a>=100000)
    cout << "eligible " << s.a;
    else
    cout<<"not eligible";
}

int main() {
    Startup s1, s2, s3, s4;

    s1.geta(10000);
    s2.geta(30000);
    s3.geta(40000);

    s4 = sum(s1, s2, s3);

    s4.display(s4);

    return 0;
}