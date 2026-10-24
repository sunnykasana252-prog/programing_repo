#include <iostream>
using namespace std;
class Example {
    int a,b,c,d;
    public:
    void getdata(int,int);
   
    void swapping_of_two_no();
  


};


 void Example::swapping_of_two_no(){
    int temp=a;
    a=b;
    b=temp;
    cout<<"the value after swap "<<a<<b<<"\n";
 }



void Example::getdata(int x,int y) {
        
        cout << "\n inside the getdata method ";
        a=x;
        b=y;
        
}



int main(){
    int a1,b1;
    cout<<"enter the no: ";
    cin>>a1>>b1;
    Example E1;
    E1.getdata(a1,b1);
   
    int p=E1.swapping_of_two_no();
    cout<<"swapping_of_two_no"<<p<<"\n";


return 0;
}