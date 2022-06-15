stack_in_class.cpp
/* using linked list*/

#include<iostream>
using namespace std;
class node{
	public:
		int data;
		node*next;
		node(int d){
			data=d;
			next=NULL;
		}
};

node*top=NULL;

void push(int val){

	node* newnode = new node(val);
	newnode->next=top;
	top=newnode;
}

void pop(){
	if(top==NULL){
		cout<<"stack underflow"<<endl;
	}
	else{
		cout<<"pop()"<<endl;
		top=top->next;
	}
}

void display(){
	if(top==NULL){
		cout<<"stack is empty"<<endl;
	}
	else{
		node* temp=top;
		while(temp){
			cout<<temp->data<<" ";
			temp=temp->next;
		}
		cout<<endl;
	}
}

int main(){
	push(2);
	push(3);
	push(4);
	push(5);
	push(6);
	push(7);
	display();
	pop();
	pop();
	display();
	return 0;
}




/*using array*/
/*
#include <iostream>
using namespace std;
int stack[100], no=100, top=-1;

void push(int val){
	if(top>=(no-1)){
		cout<<"stack overflow"<<endl;
	}
	else{
		top++;
		stack[top]=val;
	}
}

void pop(){
	if(top<0){
		cout<<"stack is underflow"<<endl;
	}
	else{
		cout<<"pop()"<<endl;
		top--;
	}
}

void display(int stack[]){
	if(top>=0){
		for(int i=top;i>=0;i--)
			cout<<stack[i]<<" ";

		cout<<endl;
		
	}
	else{
		cout<<"stack is empty"<<endl;
	}
}

int main(){
	push(2);
	push(4);
	push(5);
	push(5);
	display(stack);
	pop();
	pop();
	display(stack);
	return 0;
}
*/