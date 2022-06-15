// doublylinkedlist_deletion.cpp

#include <iostream>
using namespace std;
class node
{
public:
	int data;
	node*next,*prev;
	node(int d){
		data=d;
		next = prev = NULL;
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
			temp->prev=tail;
			tail=temp;
		}
	}
	return head;
}
void deletionatfront(node*&head){
	
	if(head==NULL){		// if head is NULL then nothing to delete
		return;
	}
	node*dlt=head;
	head=head->next;
	delete dlt;
	if(head)	// if only one node is present then (NULL->prev) is not defined 
		head->prev=NULL;
}
void deleteatend(node*&head){
	if(head==NULL){
		return;
	}
	node*tail=head;
	while(tail->next){
		tail=tail->next;
	}
	if(tail->prev)
		tail->prev->next=NULL;

	delete tail;
}
void deleteatkey(node*&head,int key){
	
	// if "head==null"
	if(head==NULL){
		return;
	}

	//same as : "if k=1"  
	if(head->data==key){
		node*n=head;
		head=head->next;
		delete n;
		head->prev=NULL;
	}

	node*ptr=head;
	while(ptr and ptr->data!=key){
		ptr=ptr->next;
	}

	//same as: no. greater then k or element not found 
					/*(note: "if only one node is present and it not equal to key" 
					this case is already covered)*/
	if(ptr==NULL){
		return;
	}

	//generally
	ptr->prev->next=ptr->next;
	if(ptr->next)   // important step
		ptr->next->prev= ptr->prev;
	delete ptr;
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
	node*head=create();
	print(head);
	deletionatfront(head);
	print(head);
	deleteatend(head);
	print(head);
	deleteatkey(head,8);
	print(head);
	return 0; 
}