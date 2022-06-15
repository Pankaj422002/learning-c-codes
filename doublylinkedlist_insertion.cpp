// doublylinkedlist_insertion.cpp
#include <iostream>
using namespace std;
class node
{
public:
	int data; 
	node*next, *prev;
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
		node*n=new node(d);
		if(head==NULL){
			head=n;
			tail=n;
		}
		else{
			tail->next=n;
			n->prev=tail;
			tail=n; 
		}
	}
	return head;
}
void insertatbeginning(node*&head, int item){
	node* n=new node(item);
	
	//corner cases: if head=NULL
	if (head==NULL){
		head=n;
		return ;
	}

	//generallized case 
	n->next=head;
	head->prev=n;
	head=n;

}
void insertatend(node*head,int item){
	node*n=new node(item);
	if(head==NULL){
		head=n;return;
	}
	node*tail=head;
	while(tail->next){
		tail=tail->next;
	}
	tail->next=n;
	n->prev=tail;
	tail=n;
}
void insertatkey(node*&head,int key,int item){
	if(head==NULL){
		insertatbeginning(head,item);
		return ;
	}
	if(head->data==key){
		insertatbeginning(head,item);return;
	}
	node* n=new node(item);
	node*tail=head;
	while(tail and tail->data!=key){
		tail=tail->next;
	}
	if(tail==NULL){
		return;
	}

	tail->prev->next=n;
	n->prev=tail->prev;

	n->next=tail;
	tail->prev= n;

}
void print(node*head){
	
	// print in forward direction
	while(head){
		cout<<head->data<<" -> ";
		head=head->next;
	}

	cout<<endl;
}
int main(){
 	freopen("myinput.txt","r",stdin);
 	node*head=create();
 	print(head);
 	insertatbeginning(head,3);
 	print(head);
 	insertatend(head,6);
 	print(head);
 	insertatkey(head,5,99);
 	print(head);
 	return 0;
}