#include<iostream>
using namespace std;
#define SIZE 5
int stack[SIZE];
int top= -1;
void push(int num){
	if (top== SIZE -1){
		cout<<"stack is overflow"<<endl;
	}
else {
	top ++;
	stack[top]= num;
	cout<< num<< "inserted" << endl;
}	
}

int pop(){
	if(top== -1){
		cout<<"stack is empty can not remove"<<endl;
	}
	else{
		cout<<stack[top]<<"removed"<<endl;
		top --;
	}
}
void display (){
	if (top == -1){
		cout<< "stack is empty" << endl;
	}
	else {
		for (int i = SIZE-1; i>=0; i--){
			cout<< stack[i]<<"  ";
		}
	}
}

int main(){
	push(10);
	push(20);
	push(30);
	push(40);
	push(50);
	push(60);
	pop();
	push(60);
	display();

}
