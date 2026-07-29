
#include<bits/stdc++.h>
using namespace std;
int sum(int , int );
int main(){
int a,b,c;
cout<<"  enter two no";
cin>>a>>b;
c=sum(a,b);
cout<<c;
return 0;
}
int sum(int a, int b){
 int c=a+b;
 return c;
}