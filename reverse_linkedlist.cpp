// reverse_linkedlist.cpp
/* by all three methods:
		 1. changing links iteratively.
		 2. changing links recursively.
		 3. changing data  recursively.
*/

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
//1. By changing links iteratively
node* reversefun(node*head){
	node*prev=NULL;
	node*curr=head;
	while(curr){
		//links breaking 
		node*temp=curr->next;
		curr->next=prev;

		//move cursure to right 
		prev=curr;
		curr=temp;
	}
	return prev;
}
//2. By changing links but recursivily
node* reverserec(node* curr, node*prev){
	
	if(curr->next==NULL){
		curr->next=prev;
		return curr;
	}

	node* ans=reverserec(curr->next,curr);
	curr->next=prev;

	return ans;
}
//3. By changing data
node* reversedata(node*head, node*curr){

	if(curr->next==NULL){
		swap(head->data,curr->data);
		return head->next;
	}

	node*ans=reversedata(head,curr->next);
	if(ans==NULL ||ans==curr||curr->next==ans)
		return NULL;
	
	swap(ans->data,curr->data);

	return ans->next;
}
int main(){
	freopen("myinput.txt","r",stdin);
	node*head=create();
	print(head);
	// head=reversefun(head);
	// head=reverserec(head,NULL);
	reversedata(head,head);
	print(head);
	return 0;
}