#include<bits/stdc++.h>
using namespace std;
// class Item{
//      static int count1;
//     public:
//     static void show();
//     static int count;
// };
// int Item::count1=10;
// void Item::show(){
//     cout<<count1;
// }
// int Item::count=20;


// int main(){
//     Item::show();
//     cout<<endl;
//     cout<<Item::count;
// }




// class Example{
//     int a;
//     static int n;
//     public:
//     static void display();
//     void getdata(int);
//     void show();

// };
// void Example::getdata(int x){
//     a=x;

// }
// void Example::show(){
//     cout<<"this is object part "<<a<<endl;
//     cout<< "this is in object method "<<n<<endl;
// }

// int Example::n=10;

// void Example::display(){
//     cout<<"this is call by static method "<<n<<endl;
// }

// int main(){
//     Example E1;
//     E1.getdata(20);
//     E1.show();
//     Example::display();
//     E1.display(); /// this is not recomanded by but we  cna access by this 
//     return 0;

// }


class Item{
     static int count;
     int n;
    public:
    void getdata(int a){
 n=a;
 count++;
    }
    void display(){
        cout<<"\n this count is "<<count;
    }
};


