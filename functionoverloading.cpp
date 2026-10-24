#include<bits/stdc++.h>
using namespace std;
void sum();
    int sum(int ,int);
    float sum(int ,int,float);
int main(){
   
    int a,b,r1;
    float r2,c;
    cout<<"the function without parameter "<<endl;
    sum();
    cout<<"enter number : "<<endl;
    cin>>a>>b>>c;
    
    r1=sum(a,b);
    r2=sum(a,b,c);
    cout<<"the sum in int sum is  : "<<r1<<endl;
    cout<<"the sum in float sum is : "<<r2<<endl;
return 0;
}
void sum(){
    int x,y,s;
    
    cout<<"enter the number : "<<endl;
    cin>>x>>y;
    s=x+y;
cout<<" the sum in without parameter is : "<<s<<endl;


}
int sum(int x,int y){
    int s=x+y;
    return s;
}
float sum(int x, int y ,float z){
 float s=x+y+z;
 return s;
}