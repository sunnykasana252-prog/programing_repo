#include <bits/stdc++.h>
using namespace std;

class Sample {
    int a, b;

public:
    Sample();
    void show();
};

Sample::Sample() {
    a = 10;
    b = 20;
}

void Sample::show() {
    cout << a << " " << b;
}

int main() {
    Sample S;
    S.show();

    return 0;
}