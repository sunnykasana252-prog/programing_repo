#include <bits/stdc++.h>
using namespace std;
class Example{
    static int a;
    public:
 // static int a;
  static void display();
};
int Example::a=10;
void Example::display(){
    cout<<Example::a<<endl;
}


int main() {

	// without object
//	cout<<Example::a<<endl;

// with object;
Example E1;
//cout<<E1.a<<endl;
E1.display();
	
	

}
