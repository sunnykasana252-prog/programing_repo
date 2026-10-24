#include <iostream>
#include <vector>
using namespace std;

class Stack {
public:
    vector<char> item;
    int top;

    Stack(int M) {
        item.resize(M);
        top = -1;
    }

    void push(char x) {
        if (top == item.size() - 1) {
            cout << "Stack Overflow\n";
        } else {
            item[++top] = x;
        }
    }

    char pop() {
        if (top == -1) {
            cout << "Stack Underflow\n";
            return '\0';
        }
        return item[top--];
    }

    char Stacktop() {
        if (top == -1)
            return '\0';
        return item[top];
    }

    bool Isempty() {
        return top == -1;
    }
};

bool pred(char a, char b) {
    int p1, p2;

    
    if (a == '^')
        p1 = 3;
    else if (a == '*' || a == '/' || a == '%')
        p1 = 2;
    else if (a == '+' || a == '-')
        p1 = 1;
    else
        p1 = 0;

    
    if (b == '^')
        p2 = 3;
    else if (b == '*' || b == '/' || b == '%')
        p2 = 2;
    else if (b == '+' || b == '-')
        p2 = 1;
    else
        p2 = 0;

    
    if (a == '^' && b == '^')
        return false;

    return p1 >= p2;
}

string infixtoprefix(string infix) {
    Stack s(100);
    string postfix = "";

    for (char symbol : infix) {

        if ((symbol >= 'a' && symbol <= 'z') ||
            (symbol >= 'A' && symbol <= 'Z') ||
            (symbol >= '0' && symbol <= '9')) {

            postfix += symbol;
        }

        else if (symbol == '(') {
            s.push(symbol);
        }

        else if (symbol == ')') {
            while (!s.Isempty() && s.Stacktop() != '(') {
                postfix += s.pop();
            }
            if (!s.Isempty())
                s.pop(); 
        }

        else { 
            while (!s.Isempty() &&
                   s.Stacktop() != '(' &&
                   pred(s.Stacktop(), symbol)) {

                postfix += s.pop();
            }
            s.push(symbol);
        }
    }

    while (!s.Isempty()) {
        postfix += s.pop();
    }

    return postfix;
}

int main() {
    string infix;
    cin >> infix;

    cout << infixtoprefix(infix);

    return 0;
}