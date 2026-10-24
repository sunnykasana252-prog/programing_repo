#include<bits/stdc++.h>
using namespace std;
class Student{
    int roll;
    string name;
    static int count;
    public:
    Student(int,string);
    void display();
    static void show();

};

Student::Student(int x,string y){
    roll=x;
    name=y;
}
void Student::display(){
    cout<<roll<<" "<<name<<endl;
    count++;
}
int Student::count;

void Student::show(){
    cout<<count;
}


int main(){
    Student S1(2,"ABC");
    S1.display();
    Student S2(5,"ABC");
    S2.display();

    Student::show();

   
}