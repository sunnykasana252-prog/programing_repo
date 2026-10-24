#include<bits/stdc++.h>
using namespace std;

class Stack{
public:
vector<int> item;
int top;
Stack(int M){
    
    item.resize(M);
    top=-1;
}
void push(int x){
    if(top==item.size()-1){
        cout<<" stack overflow"<<endl;
    }
    else{ 
     top++;
     item[top]=x;
    }
}
int pop(){
if(top==-1){
    cout<<"stack under flow"<<endl;
}
else{
   int x= item[top];
    top--;
    return x;
}
}
int Stacktop(){
int x=item[top];
return x;
}

 bool Isempty(){
if(top==-1)
return true;

else{
    return false;
}
}
};
void Decimaltobinary(int n){
    Stack s(20);
    while (n != 0) {
   int x=n%2;
        s.push(x);   
        n = n / 2;   
           
    }

    while (!s.Isempty()) {
        cout << s.Stacktop();
        s.pop();
    }
}
void Decimaltooctal(int n){
    Stack s(20);
    while (n != 0) {
   int x=n%8;
        s.push(x);   
        n = n / 8;   
           
    }

    while (!s.Isempty()) {
        
        cout << s.Stacktop();
        s.pop();
    }
}
void Decimalt0hexadecimal(int n){
    char dat[16] = {'1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
    Stack s(16);
    while (n != 0) {
   int x=n%16;
        s.push(x);   
        n = n / 16;   
           
    }

    while (!s.Isempty()) {
        int x= s.Stacktop();
        cout<<dat[x];
        s.pop();
    }
}
int main(){
    Stack s(10);
//     s.push(1);
//  s.push(2); 
//  s.push(3);
//   s.push(4);
//  int x= s.pop();
//   cout<<x<<endl;
//  x= s.Stacktop();
//   cout<<x<<endl;
//   x=s.pop();
//    cout<<x<<endl;
//    s.push(5);
//     x= s.Stacktop();
//   cout<<x<<endl;
//    x=s.pop();
//    cout<<x<<endl;
//     x=s.pop();
//    cout<<x<<endl;
//     x=s.pop();
//    cout<<x<<endl;
//     x=s.pop();
//    cout<<x<<endl;
// int n;
// cin>>n;
// Decimaltobinary(n);
// cout<<endl;
// Decimaltooctal(n);
// cout<<endl;
// Decimalt0hexadecimal(n);



 
return 0;

}