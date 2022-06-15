// linkedlist_palindrome.cpp
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
	node*head=NULL;node*tail=NULL;
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
void print(node*head){
	while(head){
		cout<<head->data<<" -> ";
		head=head->next;
	}
	cout<<"NULL"<<endl; 
}
bool ispalindrome(node*head1){
	node*slow=head1;
	node*fast=head1;
	while(fast!=NULL and fast->next!=NULL){
		slow=slow->next;
		fast=fast->next->next;
	}
	node*head2=slow->next;
	node*prev=slow;
	slow->next=NULL;
	while(head2){
		node*temp=head2->next;
		head2->next=prev;

		prev=head2;
		head2=temp;
	}
	head2=prev;
	while(head2){
		if(head1->data!=head2->data){
			return false;
		}
		head2=head2->next;
		head1=head1->next;
	}
	return true;
}
int main(){
	freopen("myinput.txt","r",stdin);
	node*head=create();
	print(head);
	bool flag = ispalindrome(head);
	if(flag==true)
		cout<<"true"<<endl;
	else
		cout<<"false"<<endl;
	return 0;
}