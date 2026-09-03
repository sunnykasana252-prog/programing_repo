#include <bits/stdc++.h>
using namespace std;
vector<int> dat(101,0);
long long fib(long long n){
    if(n==1)
    return 1;
    if(n==2)
    return 2;
    if(dat[n]==0)
    dat[n]=fib(n-1)+fib(n-2);
    
    return dat[n];
}

int main() {
	// your code goes here
	for(int i=0;i<100;i++)
	cout<<i<<":"<<fib(i)<<endl;

}
