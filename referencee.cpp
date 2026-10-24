# include<bits/stdc++.h>
using namespace std;
int main(){
   int a=10;
    int *p;
    p=&a;
   cout<<*p<<endl;
    cout<<*(&a)<<endl;
    cout<<&p<<endl;
    return 0;
}