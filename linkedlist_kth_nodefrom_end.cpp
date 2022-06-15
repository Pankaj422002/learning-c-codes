// linkedlist_kth_nodefrom_end.cpp
#include <iostream>
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
	int d;cin>>d;
	node*head=NULL;node*tail=NULL;
	while(d!=(-1)){
		node*temp=new node(d);
		if(head==NULL){
			head=temp;
			tail=temp;
		}
		else{
			tail->next=temp;
			tail=tail->next;
		}
		cin>>d;
	}
	return head;
}

void kth_node_form_end(node*head,int k){
	node*ptr=head;
	node*ptr2=head;
	int count=1;
	while(ptr){
		
		if(count<=k){
			ptr=ptr->next;
		}
		else{
			ptr=ptr->next;
			ptr2=ptr2->next;
		}
		count++;
	}
	cout<<ptr2->data<<endl;
}

void display(node*head){
	while(head){
		cout<<head->data<<" -> ";
		head=head->next;
	}
	cout<<"NULL"<<endl;
}
int main(){
	freopen("myinput.txt","r",stdin);
	node*head=create();
	display(head);
	int k;cin>>k;
	kth_node_form_end(head,k);
	return 0;
}