#include<bits/stdc++.h>
using namespace std;

class Stack{
public:
vector<char> item;
int top;
Stack(int M){
    
    item.resize(M);
    top=-1;
}
void push(char x){
    if(top==item.size()-1){
        cout<<" stack overflow";
    }
    else{ 
     top++;
     item[top]=x;
    }
}
char pop(){
if(top==-1){
    cout<<"stack under flow";
}
else{
   char x= item[top];
    top--;
    return x;
}
}
char Stacktop(){
char x=item[top];
return x;
}

 bool Isempty(){
if(top==-1)
return true;

else{
    return false;
}
}
};


string StringReverse(string str)
{
    int i = 0;
    int x = str.size();

    Stack s(x);

    while (i < x)
    {
        char c = str[i];
        s.push(c);
        i++;
    }

    string rev = "";

    while (!s.Isempty())
    {
        char ch = s.pop();
        rev += ch;
    }

    return rev;
}


int main(){
//     Stack s(6);
//     s.push('A');
//  s.push('B'); 
//  s.push('C');
//   s.push('D');
//  char x= s.pop();
//   cout<<x<<endl;
//  x= s.Stacktop();
//   cout<<x<<endl;
//   x=s.pop();
//    cout<<x<<endl;
//    s.push('E');
//     x= s.Stacktop();
//   cout<<x<<endl;
//    x=s.pop();
//    cout<<x<<endl;
//     x=s.pop();
//    cout<<x<<endl;
//     x=s.pop();
//    cout<<x<<endl;
//     x=s.pop();
//    cout<<x<<endl;

   string str;

    cout << "Enter a string: ";
    cin >> str;     

    string ans = StringReverse(str);

    cout << "Reversed string: " << ans << endl;

  
return 0;
}