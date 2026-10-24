#include<bits/stdc++.h>
using namespace std;
class Example{
    private:
    int a,b;

    public:
    int n;
  void getfrom(){
    cout<<"enter the data ";
    cin>>a>>b;

    }
    void print(){
    cout<<" the data value is "<<a<<" "<<b;

    }
};
int c=40;
int main(){
    Example E;
    int c=50;
    E.getfrom();
    E.print();
   
   
    cout<<c<<endl;;
    cout<<::c;
     return 0;
}