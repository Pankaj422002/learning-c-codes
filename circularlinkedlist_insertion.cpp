// circularlinkedlist_insertion.cpp
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
	int n;cin>>n;
	node*head=NULL;
	node*tail=NULL;
	for(int i=0;i<n;i++){
		int d;cin>>d;
		node*temp=new node(d);
		if(head==NULL){
			head=temp;
			tail=temp;
		}
		else{
			tail->next=temp;
			tail=tail->next;
		}
	}
	tail->next=head;
	return head;
}
void insertatfront(node*&head,int item){
	node* n=new node(item);
	
	if(head==NULL){
		head=n;
		head->next=head;
		return;
	}

	node*ptr=head;
	while(ptr->next!=head){
		ptr=ptr->next;
	}
	n->next=head;
	ptr->next=n;
	head=n;

}

void insertatend(node*head,int item){
	node*n=new node(item);
	if(head==NULL){
		head=n;
		head->next=head;
		return;
	}
	node*ptr=head;
	while(ptr->next!=head){
		ptr=ptr->next;
	}
	ptr->next=n;
	n->next=head;
}
void insertafterkey(node*head,int key, int item){
	node*n=new node(item);
	if(head==NULL){
		head=n;
		head->next=head;
		return ;
	}

	node*ptr=head;
	while(ptr->data!=key){
		ptr=ptr->next;
		if(ptr==head){
			return ;
		}
	}
	n->next=ptr->next;
	ptr->next=n;

}

void print(node*head){
	node*ptr=head;
	while(ptr->next!=head){
		cout<<ptr->data<<" -> ";
		ptr=ptr->next;
	}
	cout<<ptr->data<<endl;
}
int main(){
	freopen("myinput.txt","r",stdin);
	node*head=create();
	print(head);
	insertatfront(head,12);
	print(head);
	insertatend(head,23);
	print(head);
	return 0;
}