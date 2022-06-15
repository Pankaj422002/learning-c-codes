// circularlinkedlist_implementation.cpp
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
	return 0;
}