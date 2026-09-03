#include <bits/stdc++.h>
using namespace std;

long long fib(int n, vector<int> &dat) {
    if (n == 0)
        return 0;

    if (n == 1)
        return 1;

    if (dat[n] == -1)
        dat[n] = fib(n - 1, dat) + fib(n - 2, dat);

    return dat[n];
}

int main() {
    int n;
    cin >> n;

    vector<int> dat(n + 1, 0);

    for (int i = 0; i <= n; i++) {
        cout << i << " : " << fib(i, dat) << endl;
    }

    return 0;
}