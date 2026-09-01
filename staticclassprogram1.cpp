#include <bits/stdc++.h>
using namespace std;
class Example{
    static int n;
    int a=10;
    public:
    
    void display();
};

int Example::n=10;
void Example::display(){
    cout<<n<<endl;
    cout<<a;
}

int main() {
	Example E1;
	E1.display();


    return 0;
}
