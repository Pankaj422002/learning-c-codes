// linkedlist_even_after_odd.cpp
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
node*create(){
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
	return head;
}

node* even_after_odd(node*head){
	node*curr=head;
	node*left_head=NULL;node*left_tail=NULL;
	node*right_head=NULL;node*right_tail=NULL;
	while(curr){
		
		if(curr->data % 2 == 0){
			if(right_head==NULL){
				right_head=curr;
				right_tail=curr;
			}
			else{
				right_tail->next=curr;
				right_tail=curr;
			}
		}
		else{
			if(left_head==NULL){
				left_head=curr;
				left_tail=curr;
			}
			else{
				left_tail->next=curr;
				left_tail=curr;
			}
		}
		curr=curr->next;
	}
	if(left_head==NULL){
		return right_head;
	}
	if(right_head==NULL){
		return left_head;
	}
	right_tail->next=NULL;
	left_tail->next = right_head;
	return left_head;
}

void display(node*head){
	while(head){
		cout<<head->data<<" -> ";
		head=head->next;
	}
	cout<<"NULL" << endl;
}
int main(){
	freopen("myinput.txt","r",stdin);
	node*head=create();
	display(head);
	head = even_after_odd(head);
	display(head);
	return 0;
}