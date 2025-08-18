#include<iostream>
using namespace std;
#define SIZE 5
int Queue[SIZE];
int rear = -1, front =-1;



void enqueue  (int num) {
    if(rear == SIZE-1){
        cout<<"overflow"<< endl;
    }
    
    else if(rear== -1 && front ==-1){
        front = rear = 0;
        Queue[rear]=num;
      cout<<num << "inserted"<<endl;
	    }
    
    else {
        rear ++;
        Queue[rear]=num;
  
  cout<< num<< "inserted "<< endl;
    }
    
}
void dequeue(){
	if (front == -1 && rear == -1){
		cout <<  "underflow" << endl;
		
	}
	
	else if (front == rear){
		cout << Queue[front] << " removed" << endl;
		front = rear = -1;
	}
	else {
		cout << Queue[front] << " removed" << endl;
		front++;
	}
}

    int main(){
        enqueue(10);
        enqueue(20);
        enqueue(30);
        enqueue(40);
        enqueue(50);
        
        dequeue();
        dequeue();
        dequeue();
        dequeue();
        dequeue();
        dequeue();
        

    
    return 0;
}
