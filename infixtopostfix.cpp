#include<bits/stdc++.h>
#include<vector>
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
        if(top == item.size()-1){
            cout<<"stack overflow";
        }
        else{
            top++;
            item[top]=x;
        }
    }

    char pop(){
        if(top==-1){
            cout<<"stack under flow";
            return '\0';
        }
        else{
            char x=item[top];
            top--;
            return x;
        }
    }

    char Stacktop(){
        return item[top];
    }

    bool Isempty(){
        if(top==-1)
            return true;
        else
            return false;
    }
};

bool pred(char a, char b){

    if(a=='^'||a=='*'||a=='/'||a=='%'){
        if(b=='^'){
            return false;
        }
        else{
            return true;
        }
    }

    else if(a=='+'||a=='-'){
        if(b=='+'||b=='-'){
            return true;
        }
        else{
            return false;
        }
    }

    return false;
}

string infixtopostfix(string infix){

    Stack s(20);
    int i=0;
    string postfix="";

    while(i<infix.size()){

        char symbol=infix[i];
        i++;

        
        if(symbol>='a' && symbol<='z'){
            postfix=postfix+symbol;
        }

        
        else if(symbol=='('){
            s.push(symbol);
        }

        
        else if(symbol==')'){

            while(!s.Isempty() && s.Stacktop()!='('){
                postfix=postfix+s.pop();
            }

            if(!s.Isempty()){
                s.pop(); 
            }
        }

        
        else{

            while(!s.Isempty() &&  s.Stacktop()!='(' && pred(s.Stacktop(),symbol)){

                postfix=postfix+s.pop();
            }

            s.push(symbol);
        }
    }

    while(!s.Isempty()){
        postfix=postfix+s.pop();
    }

    return postfix;
}

int main(){

    string infix;
    getline(cin,infix);

    cout<<infixtopostfix(infix);

}
