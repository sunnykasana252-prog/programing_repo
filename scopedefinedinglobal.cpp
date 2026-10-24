#include <iostream>
using namespace std;
class Example {
    int a,b;
    public:
    void getdata(int,int);
    int add();
};
void Example::getdata(int x,int y) {
        
        cout << "\n inside the getdata method ";
        a=x;
        b=y;
}
int Example::add(){
    int s=a+b;
    return (s);

}

int main(){
    int a1,b1,c;
    cout<<"enter the no: ";
    cin>>a1>>b1;
    Example E1;
    E1.getdata(a1,b1);
    int r=E1.add();
    cout<<"\n the sum is: "<<r;
    return 0;
}