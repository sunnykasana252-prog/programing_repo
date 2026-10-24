#include<bits/stdc++.h>
#include<cstdarg>
using namespace std;

void display(int size ,...){
 int n,total=0,per;
 va_list args;
 va_start(args,size);
 for(int i=0;i<size;i++){
    n=va_arg(args,int);
    total+=n;
    
 }
 per=total/size;

 if(per >= 90)
    cout<<"A+"<<endl;
else if(per >= 80)
    cout<<"A"<<endl;
else if(per >= 70)
    cout<<"B+"<<endl;
else if(per >= 60)
    cout<<"B"<<endl;
else
    cout<<"Fail"<<endl;

 va_end(args);

}
int main(){
    display(5,90,90,90,90,90);
}

