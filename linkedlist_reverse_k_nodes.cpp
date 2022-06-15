// linkedlist_reverse_k_nodes.cpp
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
		else{
			tail->next=temp;
			tail=tail->next;
		}
	}
	return head;
}
node* reverse_k_node(node*head,int k){

	if(head==NULL)
		return NULL;

	node*curr=head;
	node*prev=NULL;
	int cnt=0;
	while(curr && cnt<k){
		node*temp=curr->next;
		curr->next=prev;
		prev=curr;
		curr=temp; 
		cnt++;
		// if(cnt==k){
		// 	break;
		// }
	}

	//undo the changes or reverse the linked list 
	if(cnt<k){
		curr=prev;
		prev=NULL;
		while(curr){
			node*nxt=curr->next;
			curr->next=prev;
			prev=curr;
			curr=nxt;			
		}
		return prev;
	}

	node*ans = reverse_k_node(curr,k); 
	head->next=ans;
	return prev;
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
	head = reverse_k_node(head,2);
	display(head);
	return 0;
}