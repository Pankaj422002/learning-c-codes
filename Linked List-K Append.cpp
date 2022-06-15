// Linked List-K Append.cpp
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
node* create(int n){
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
		cout<<head->data<<" ";
		head=head->next;
	}
	cout<<endl; 
}
void kthappendll(node*&head1,int k){
	if(head1==NULL || k<=0){
		return;
	}
	node*ptr1=head1;
	node*ptr2=head1;
	int count=1; 
	while(ptr1){
		if(count<=(k+1)){
			count++;
			ptr1=ptr1->next;
		}
		else{

			ptr1=ptr1->next;
			ptr2=ptr2->next;
		}
	}
	node* head2=ptr2->next;
	ptr2->next=NULL;
	node*tail2=head2;
	while(tail2->next){
		tail2=tail2->next;
	}
	tail2->next=head1;
	head1 = head2;

}
int main(){
	int n;cin>>n;
	node*head = create(n);
	int k;cin>>k;
	k=k%n;

	kthappendll(head,k);
	print(head);
	return 0;
}