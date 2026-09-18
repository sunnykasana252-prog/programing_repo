#include <bits/stdc++.h>
using namespace std;

vector<int> C;

void MergeArray(vector<int>& A, int m, vector<int>& B, int n) {
    int i = 0;
    int j = 0;

    while (i < m && j < n) {
        if (A[i] < B[j]) {
            C.push_back(A[i]);
            i++;
        }
        else {
            C.push_back(B[j]);
            j++;
        }
    }

    while (i < m) {
        C.push_back(A[i]);
        i++;
    }

    while (j < n) {
        C.push_back(B[j]);
        j++;
    }

    for (int x = 0; x < C.size(); x++) {
        cout << C[x] << ", ";
    }
}

void Union(vector<int>& A, int m, vector<int>& B, int n) {

    
    C.clear();

    int i = 0;
    int j = 0;

    while (i < m && j < n) {

        if (A[i] < B[j]) {
            C.push_back(A[i]);
            i++;
        }
        else if (B[j] < A[i]) {
            C.push_back(B[j]);
            j++;
        }
        else {
            
            C.push_back(A[i]);
            i++;
            j++;
        }
    }

    while (i < m) {
        C.push_back(A[i]);
        i++;
    }

    while (j < n) {
        C.push_back(B[j]);
        j++;
    }

    for (int x = 0; x < C.size(); x++) {
        cout << C[x] << ", ";
    }
}

void Intersection(vector<int>& A, int m, vector<int>& B, int n) {

    
    C.clear();

    int i = 0;
    int j = 0;

    while (i < m && j < n) {

        if (A[i] < B[j]) {
           
            i++;
        }
        else if (B[j] < A[i]) {
           
            j++;
        }
        else {
            
            C.push_back(A[i]);
            i++;
            j++;
        }
    }

  

    for (int x = 0; x < C.size(); x++) {
        cout << C[x] << ", ";
    }
}
void SubtractA_B(vector<int>& A, int m, vector<int>& B, int n) {

    
    C.clear();

    int i = 0;
    int j = 0;

    while (i < m && j < n) {

        if (A[i] < B[j]) {
            C.push_back(A[i]);
            i++;
        }
        else if (B[j] < A[i]) {
            j++;
        }
        else {
            i++;
            j++;
        }
    }

    while (i < m) {
        C.push_back(A[i]);
        i++;
    }
    for (int x = 0; x < C.size(); x++) {
        cout << C[x] << ", ";
    }
}
void SubrtuctA_BUnion(vector<int>& A, int m, vector<int>& B, int n) {
    int i = 0;
    int j = 0;

    while (i < m && j < n) {
        if (A[i] < B[j]) {
            C.push_back(A[i]);
            i++;
        }
         else if (B[j] < A[i]) {
            C.push_back(B[j]);
            j++;
        }
        else {
            i++;
            j++;
        }
    }

    while (i < m) {
        C.push_back(A[i]);
        i++;
    }

    while (j < n) {
        C.push_back(B[j]);
        j++;
    }

    for (int x = 0; x < C.size(); x++) {
        cout << C[x] << ", ";
    }
}


int main() {

    vector<int> A;

    A.push_back(5);
    A.push_back(10);
    A.push_back(13);
    A.push_back(14);
    A.push_back(16);
    A.push_back(25);

    vector<int> B;

    B.push_back(5);
    B.push_back(12);
    B.push_back(16);
    B.push_back(23);
    B.push_back(24);

    int m = A.size();
    int n = B.size();

    cout << "Merge Array -> ";
    MergeArray(A, m, B, n);

    cout << "\nUnion Array -> ";
    Union(A, m, B, n);

    cout<<"\n intersection ->";
     Intersection(A, m, B, n);

     cout<<"\n subtruct a-b ->";
     SubtractA_B(A, m, B, n);
     cout<<"\n subtruct a-b union ->";
     SubrtuctA_BUnion(A, m, B, n);
    return 0;
}