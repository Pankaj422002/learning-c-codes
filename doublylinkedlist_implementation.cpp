// doublylinkedlist_implementation.cpp
#include <iostream>
using namespace std;
class node
{
public:
	int data;
	node*next;
	node*prev;
	node(int d){
		data=d;
		next=NULL;
		prev=NULL;
	}
};

node* create(){
	int n;cin>>n;
	node*head=NULL;
	node*tail=NULL;
	for(int i=0;i<n;i++){
		int d;cin>>d;
		node* temp=new node(d);
		if(head==NULL){
			head=temp;
			tail=temp;
		}
		else{
			tail->next=temp;
			temp->prev=tail;
			tail=temp;
		}
	}
	return head;
}

void print(node* head){
	// print in forward direction
	while(head->next){
		cout<<head->data<<" -> ";
		head=head->next;
	}
	// print in backward direction
	while(head){
		cout<<head->data<<" -> ";
		head=head->prev;
	}
	cout<<endl;
}

int main(){
	freopen("myinput.txt","r",stdin); 
	node* head=create();
	print(head);
	return 0;
}
