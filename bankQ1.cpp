#include <bits/stdc++.h>
using namespace std;

class BankAccount {
    static int total;
    int balance;

public:
    void getdata(int);
    void display();
    static void showTotal();
};

int BankAccount::total = 0;

void BankAccount::getdata(int amount) {
    balance = amount;
    total += balance;
}

void BankAccount::display() {
    cout << "Account Balance: " << balance << endl;
}

void BankAccount::showTotal() {
    cout << "Total Deposit: " << total << endl;
}

int main() {

    BankAccount A1, A2;

    A1.getdata(1000);
    A2.getdata(2000);

    A1.display();
    A2.display();

    BankAccount::showTotal();

    return 0;
}