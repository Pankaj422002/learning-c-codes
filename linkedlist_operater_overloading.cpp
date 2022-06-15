// linkedlist_operater_overloading.cpp
// operator overloading in linked lists 

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
		tail->next=temp;
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
istream& operator>>(istream &is, node* &head){
	head=create();
	return is;
}
ostream& operator<<(ostream &os, node* head){
	print(head);
	return os;
}
int main(){
	freopen("myinput.txt","r",stdin);

	node*head=NULL;
	node*head2=NULL;
	cin>>head>>head2;
	cout<<head<<head2;
	
	return 0;
}