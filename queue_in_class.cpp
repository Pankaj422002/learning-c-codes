// queue_in_class.cpp
/*using array*/
#include <iostream>
using namespace std;
int front=(-1),rear=(-1);
int size=100, arr[100];
void enqueue(int item){

	if(rear==(size-1)){
		cout<<"OVERFLOW"<<endl;
	}
	else{
		if(front==-1){
			front++;
		}
		rear++;
		arr[rear]=item; 
	}
}
void dequeue(){
	if(rear==(-1)||front>rear){
		cout<<"UNDERFLOW"<<endl;
	}
	else{
		int item=arr[front];
		cout<<"dequeue"<<endl;
		front++;
	}
}

void display(){
	if(front==-1 || front>rear){
		cout<<"EMPTY QUEUE"<<endl;
	}
	else{
		for(int i=front;i<=rear;i++){
			cout<<arr[i]<<"  ";
		}
	}
	cout<<endl;
}
int main(){
	
	enqueue(12);
	enqueue(22);
	enqueue(32);
	enqueue(42);
	display();
	dequeue();
	dequeue();
	display();
	return 0;
}

/*
// using linked list

#include <iostream>
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
node*front= NULL;
node*rear=NULL;

void enqueue(int item){
	node* temp =new node(item);
	if(rear==NULL){
		rear=temp;
		front=temp;
	}
	else{
		rear->next=temp;
		rear=rear->next;
	}
}
void dequeue(){
	node*front1=front;
	if(front1==NULL){
		cout<<"EMPTY"<<endl;
		return;
	}
	else 
		{
			if(front1->next!=NULL){
				front1=front1->next;
				cout<<"dequeue()"<<endl;
				delete front;
				front=front1;
			}
			else{
				cout<<"dequeue()"<<endl;
				delete front1;
				front=NULL;
				rear=NULL;
			}
		}
}
void display(){
	node*front1=front;
	if(front1==NULL || rear==NULL){
		cout<<"EMPTY"<<endl;
		return ;
	}
	while(front1!=rear){
		cout<<front1->data<<"  " ;
		front1=front1->next;
	}
	if(front1==rear)
		cout<<front1->data<<endl;

}
int main(){
	enqueue(12);
	enqueue(22);
	enqueue(32);
	enqueue(42);
	enqueue(52);
	enqueue(62);
	display();
	dequeue();
	dequeue();
	dequeue();
	dequeue();
	display();
	return 0;
}
*/