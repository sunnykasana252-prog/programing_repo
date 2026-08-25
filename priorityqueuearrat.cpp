#include <bits/stdc++.h>
using namespace std;


void Insarray(int arr[], int i, int &n, int x) {
    for (int j = n - 1; j >= i; j--) {
        arr[j + 1] = arr[j];
    }

    arr[i] = x;
    n=n+1;
}


int Delarray(int arr[], int &n, int i) {
    int x = arr[i];

    for (int j = i + 1; j < n; j++) {
        arr[j - 1] = arr[j];
    }
    n=n-1;

    return x;
}

int main() {
    int arr[100] = {10, 20, 30, 40, 50};
    int n = 5;

    
    Insarray(arr, 2, n, 25);
    

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;

    // Delete element at index 2
    int deleted = Delarray(arr, n, 2);
    

    cout  << deleted << endl;

    cout << "After Deletion: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}