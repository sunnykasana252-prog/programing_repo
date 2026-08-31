#include <bits/stdc++.h>
using namespace std;

int main() {
    int decimal;
    stack<int> s;

    cout << "Enter decimal number: ";
    cin >> decimal;

    while (decimal > 0) {
        int r = decimal % 2;
        s.push(r);
        decimal = decimal / 2;
    }

    while (!s.empty()) {
        int x = s.top();
        cout << x;
        s.pop();
    }

    return 0;
}