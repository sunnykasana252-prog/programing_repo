#include <bits/stdc++.h>
using namespace std;
class Example{
    static int n;
    int a;
    public:
    void geta(int);
    void display();
    static void show();
};

void Example::geta(int x){
    a=x;
}
int Example::n=10;
void Example::display(){
    cout<<n<<endl;
    cout<<a<<endl;
}


void Example::show(){
    cout<<"inside the class member function"<<endl;
    cout<<n;
}

int main() {
	Example E1;
	E1.geta(20);
	E1.display();
	Example::show();
 
 
 return 0;

}
