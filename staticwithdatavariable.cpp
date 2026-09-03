#include <bits/stdc++.h>
using namespace std;
class Example{
    static int n;
    int a;
    public:
    void getdata(int);
    void display();
};

int Example::n;
void Example::getdata(int x){
    a=x;
    n++;
}

void Example::display(){
    cout<<a<<endl;
    cout<<n<<endl;
}

int main() {
	Example E1,E2,E3;
    E1.getdata(10);
	E1.display();
    E2.getdata(20);
	E2.display();
    E3.getdata(30);
	E3.display();


    return 0;
}
