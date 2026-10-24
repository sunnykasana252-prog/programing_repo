#include<iostream>
#include<cstdarg>
using namespace std;

void display(){
    cout<<"end";
}

template<typename T,typename... val>
void display(T first,val... rest){
    cout<<first<<"\n";
    display(rest...);
}
int main(){
    display(10,10.5,"hello",'A',true);
    return 0;
}