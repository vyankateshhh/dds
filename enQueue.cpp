#include<iostream>
using namespace std;
#define SIZE 5
int Queue[SIZE];
int rear = -1, front =-1;
void enqueue (int num) {
    if(rear == SIZE-1){
        cout<<"overflow";
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

    int main(){
        enqueue(10);
        enqueue(20);
        enqueue(30);
        enqueue(50);
        enqueue(80);
        enqueue(90);

    
    return 0;
}
