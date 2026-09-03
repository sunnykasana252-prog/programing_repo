#include<iostream>
using namespace std;

// template<class T1,class T2>

// void display(T1 a,T2 b){
//     cout<<a<<" "<<b<<endl;
// }
// int main(){
// display(10,20.3);
// display(10.3,20.3);
// display("cse",10);
// }

template<class T1, class T2>
auto sum(T1 a, T2 b) {
    return a + b;
}

int main() {
    int x = sum(10, 20);
    cout<<x<<endl;
} 
