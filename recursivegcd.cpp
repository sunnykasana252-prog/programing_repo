#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
    if(a==b){
        return a;
    }

    if(a>b){
      return gcd(a-b,a);
    }
    else{
        return gcd(a,b-a);
    }
}

int main() {

	cout<<gcd(35,55)<<endl;

}
