#include <bits/stdc++.h>
using namespace std;
class CQueue{
    vector<int> item;
    int rear;
    int front;
    public:
    
    // this is used to initilase the Queue
    CQueue(int SIZE){
        item.resize(SIZE);
        rear=SIZE-1;
        front=SIZE-1;
    }
    
    // IsEmpty is used to find the empty element in queue
  bool  IsEmpty(){
        if(rear==front){
            return true;
        }
        else{
            return false;
        }
    }
    //enqueue is used to insert the element in queue
void EnQueue(int x){
    int m=item.size();
    if((rear+1)%m==front){
        cout<<"Queue over flow";
        exit(1);
    }
    else{
    rear=(rear+1)%m;
    item[rear]=x;
    }
}

// this  dequeue is used for delete element
int DeQueue(){
    int m=item.size();
    if((front+1)%m==rear){
        cout<<"Queue is under flow";
        exit(1);
    }
    else{
    front=(front+1)%m;
    int x=item[front];
    front++;
    return x;
    }
}

};

int main() {
	
	
	CQueue CQ(5);
	CQ.EnQueue(1);
	CQ.EnQueue(2);
	CQ.EnQueue(3);
	CQ.EnQueue(4);
//	CQ.EnQueue(5);
// 	CQ.EnQueue(6);
	cout<<CQ.DeQueue()<<endl;
	cout<<CQ.DeQueue()<<endl;
	cout<<CQ.DeQueue()<<endl;
	cout<<CQ.DeQueue()<<endl;
	cout<<CQ.DeQueue()<<endl;
	cout<<CQ.DeQueue()<<endl;
	
	
	

}
