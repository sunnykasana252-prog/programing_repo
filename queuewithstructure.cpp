#include <bits/stdc++.h>
#define SIZE 10
using namespace std;
 
struct Queue{
    int item[SIZE];
    int rear;
    int front;
};
     Queue Q;
    
   
    // this is used to initilase the Queue
  void  Initilase(){
       
        Q.rear=-1;
        Q.front=0;
    }
    
    // IsEmpty is used to find the empty element in queue
bool  IsEmpty(){
        if(Q.rear-Q.front+1==0){
            return true;
        }
        else{
            return false;
        }
    }
    //enqueue is used to insert the element in queue
 void EnQueue(int x){
    int m=Q.item[SIZE];
    if(Q.rear==m-1){
        cout<<"Queue over flow";
        exit(1);
    }
    else{
    Q.rear++;
    Q.item[Q.rear]=x;
    }
}

// this  dequeue is used for delete element
int DeQueue(){
    if(Q.rear-Q.front+1==0){
        cout<<"Queue is under flow";
        exit(1);
    }
    else{
    int x;
    x=Q.item[Q.front];
    Q.front++;
    return x;
    }
}



int main() {
	 
	
Initilase();
EnQueue(1);
EnQueue(2);
EnQueue(3);
EnQueue(4);
EnQueue(5);
EnQueue(6);
cout<<DeQueue()<<endl;
cout<<DeQueue()<<endl;
cout<<DeQueue()<<endl;
cout<<DeQueue()<<endl;
cout<<DeQueue()<<endl;
return 0;
}

