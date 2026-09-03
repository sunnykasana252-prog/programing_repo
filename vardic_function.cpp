#include<iostream>
#include<cstdarg>
using namespace std;
void display(int size,...){
    int n;
    va_list args;
    va_start(args,size);
    int count=0;
    for (int i=0;i<size;i++){
        n=va_arg(args,int);
        count+=n;
        cout<<n<<endl;
    }
   cout<< "sum "<<count<<endl;
    va_end(args);
}
int main(){
    
   display(6,10,20,30,40,50,60);
}