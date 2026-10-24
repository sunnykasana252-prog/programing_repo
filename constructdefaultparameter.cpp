#include <bits/stdc++.h>
using namespace std;

class Sample {
    int a , b;

public:
    Sample(int,int);
    void show();
};

Sample::Sample(int x,int y=20) {
    a = x;
    b = y;
}

void Sample::show() {
    cout << a << " " << b<<endl;
}

int main() {
    Sample S1(24,56);
    S1.show();

     Sample S2(100);
    S2.show();

    return 0;
}