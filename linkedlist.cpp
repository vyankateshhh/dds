#include<iostream>
using namespace std;


struct Node{
	int data;
	Node * next;
};

Node * head = NULL;

void Traverse () {
	Node * temp = head;
	while ( temp!= NULL){
		cout<<temp -> data<<"-->";
		temp = temp -> next;
	}
	cout<< " NULL";
}


void insertstart(int num){
	Node * newNode = new Node();
	newNode ->data = num;
	newNode ->next = head;
	
	head = newNode ;
	cout<< num << "inserted at start \n";
}

void insertEnd(int num){
	Node * newNode = new Node();
	newNode ->data = num;
	newNode ->next = NULL;
	
	if(head==NULL){
		head= newNode;
		cout<<num<<"inserted"<<endl;
	}
	else {
		Node * temp = head;
		while(temp ->next !=NULL){
			temp= temp->next;
		}
		temp ->next = newNode;
		cout<<num<< " inserted"<<endl;
	}
	
	  
}

int main(){
	
	insertEnd(10);
	insertEnd(6);
	insertEnd(6);
	insertEnd(3);
	insertstart(3);
	insertstart(4);
	Traverse();
	  
       
    return 0;
}
