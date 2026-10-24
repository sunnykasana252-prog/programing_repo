#include <iostream>
using namespace std;
class Example {
    int a,b,c,d;
    public:
    void getdata(int,int,int);
   
    float area_of_circle();
    


};

float Example::area_of_circle(){
   float s=3.14*a;
   return(s);
}



void Example::getdata(int x) {
        
        cout << "\n inside the getdata method ";
        a=x;
       
}



int main(){
    int a1;
    cout<<"enter the no: ";
    cin>>a1;
    Example E1;
    E1.getdata(a1);
    int z=E1.area_of_circle();
    cout<<z<<"\n";
    


return 0;
}