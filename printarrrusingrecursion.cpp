#include <bits/stdc++.h>
using namespace std;

void printArray(vector<int>arr,int i){
    int n=arr.size();
    if(i<n){
        printArray(arr,i+1);     /// if we put this contion brfore so it print arr in reverse order
   cout<<arr[i]<<" ,";
   
     //  printArray(arr,i+1);    //// if we put this statement after recursive call so the arr is print in simple order
    }
}

int main() {
    vector<int>arr;
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(4);
    arr.push_back(5);

   
    printArray(arr,0);

   

    return 0;
}