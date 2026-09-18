#include <bits/stdc++.h>
using namespace std;

vector<int> C;

void Merge(vector<int>& A, int low, int mid, int high) {
    int i = low;
    int j = mid + 1;
    int k = low;

    while (i <= mid && j <= high) {
        if (A[i] < A[j]) {
            C[k] = A[i];
            i++;
        }
        else {
            C[k] = A[j];
            j++;
        }
        k++;
    }

   
    while (i <= mid) {
        C[k] = A[i];
        i++;
        k++;
    }

    while (j <= high) {
        C[k] = A[j];
        j++;
        k++;
    }

  
    for (int x = low; x <= high; x++) {
        A[x] = C[x];
    }
}

void MergeSort(vector<int>& A, int low, int high) {
    if (low < high) {
        int mid = (low + high) / 2;

        MergeSort(A, low, mid);
        MergeSort(A, mid + 1, high);

        Merge(A, low, mid, high);
    }
}

int main() {
    int n;
    cin >> n;
  C.resize(n);
    vector<int> A(n);
  

    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    MergeSort(A, 0, n - 1);

    for (int i = 0; i < n; i++) {
        cout << A[i] << " ";
    }

    return 0;
}