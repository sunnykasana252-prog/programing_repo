#include <bits/stdc++.h>
using namespace std;

void decimalToBinary(int n) {
    if (n > 0) {
        decimalToBinary(n / 2);
        cout << n % 2;
    }
    else if(n==0){
    cout<<0;

    }
}

int main() {
    int n;
    cin >> n;

    decimalToBinary(n);

    return 0;
}