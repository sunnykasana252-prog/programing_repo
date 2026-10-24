#include<bits/stdc++.h>
using namespace std;

class Stack{
public:
vector<int> item;
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
int pop(){
if(top==-1){
    cout<<"stack under flow";
}
else{
   int x= item[top];
    top--;
    return x;
}
}
int Stacktop(){
int x=item[top];
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
int Evaluate(int a, int b, char op)
{
    switch(op)
    {
        case '+': return a + b;
        case '-': return a - b;
        case '*': return a * b;
        case '/': return a / b;
        case '^': return pow(a,b);
    }
    return 0;
}
int main(){
    Stack s(20);
   int  i=0;
    string postfix;
    cin>>postfix;
    
   while(i < postfix.length()){
        char symbol = postfix[i];
        i++;
       if(symbol>='0'&&symbol<='9'){
        s.push(symbol - '0');
       }
       else{
        int b=s.pop();
        int a=s.pop();
        int val=Evaluate(a,b,symbol);
        s.push(val);
       }
    }
    cout<<s.Stacktop();

return 0;
}