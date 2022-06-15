// linkedlist_inputtaking.cpp

// 1. at end
#include<iostream>
using namespace std;
class node
{
public:
	int data;
	node*next;
	node(int d){
		data=d;
		next=NULL;
	}	
};
node* create(){
	int n;
	cin>>n;
		node*head=NULL;
		node*tail=NULL;
	for(int i=0;i<n;i++){

		int d;cin>>d;
		node* n1=new node(d);

		if(head==NULL){
			head=n1;
			tail=n1;
		}
		tail->next=n1;
		tail=tail->next;

	}

	return head;
}

void print(node*head){
	while(head){
		cout<<head->data<<" -> ";
		head=head->next;
	}
	cout<<"NULL"<<endl;
}
int main(){
	freopen("myinput.txt","r",stdin);
	node*head =create();
	print(head);
	return 0;
}


/*
// at beginning
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
node* createatbegin(){
	int n;
	cin>>n;
	node*head=NULL;
	for(int i=0;i<n;i++){
		int d;cin>>d;
		node* n=new node(d);
			n->next=head;
			head=n;
		}
		return head;
}
void print(node*head){
	while(head){
		cout<<head->data<<" -> ";
		head=head->next;
	}
	cout<<"NULL"<<endl;
}
int main(){
	freopen("myinput.txt","r",stdin);
	node* head=createatbegin();
	print(head);
	return 0;
}
*/