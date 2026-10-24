#include<bits/stdc++.h>
using namespace std;
class Example{
    int a,b;
    public:
    Example();
    // {
    //     cout<<"constructor called";
    // }
    ~Example();
    // {
    //     cout<<"\n  destructor called";
    // }
    void display();

};
 Example::Example(){
    a=10;
    b=20;
        cout<<"constructor called "<<a<<" "<<b;
    }
    Example::~Example()
    {
        cout<<"\n  destructor called";
    }
   
int main(){
    Example E1;
  
}