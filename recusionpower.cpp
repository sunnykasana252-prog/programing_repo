#include <bits/stdc++.h>
using namespace std;


int power1(int a, int n) {
    if(n == 0) {
        return 1;
    }

    return a * power1(a, n - 1);
}


int power2(int a, int n) {
    if(n == 0) {
        return 1;
    }

    if(n % 2 == 0) {
        return power2(a, n / 2) * power2(a, n / 2);
    }
    else {
        return a * power2(a, n / 2) * power2(a, n / 2);
    }
}

int main() {
    cout << power2(2, 8) << endl;
    cout << power1(2, 8) << endl;

    return 0;
}