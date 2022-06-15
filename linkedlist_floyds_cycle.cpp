// linkedlist_floyds_cycle.cpp
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
node* createcycle(){
	int n; cin>>n;
	node*head=NULL;
	node*tail=NULL;
	node*x;
	for(int i=0;i<n;i++){
		int d;cin>>d;
		node*temp=new node(d);
		if(head==NULL){
			head=temp;
			tail=temp;
		}
		tail->next=temp;
		tail=tail->next;
		if(i==3){
			x=tail;
		}
	}
	tail->next= x;
	return head;
}
bool remove_and_detect_cycle(node*head){
	node*slow=head;
	node*fast=head;
	while(fast!=NULL and fast->next!=NULL){
		slow=slow->next;
		fast=fast->next->next;
		if(slow==fast){
			slow=head;
			while(slow!=fast){
				slow=slow->next;
				fast=fast->next;
			}
			while(fast->next!=slow){
				fast=fast->next;
			}
			fast->next=NULL;
			return true;
		}
	}
	return false;
}
void print(node*head){
	while(head){
		cout<<head->data<<" -> ";
		head=head->next;
	}
	cout<<"null"<<endl;
}
int main(){
	freopen("myinput.txt","r",stdin);
	node*head=createcycle();
	// print(head);
	int check = remove_and_detect_cycle(head);
	if(check==false){
		cout<<"cycle is not present"<<endl;
	}else{
		cout<<"cycle is present"<<endl;
	}
	print(head);
	return 0;
}