// linkedlist_kth_nodefromend.cpp
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
void insertionatend(node*&head,int item){
	node*temp=new node(item);
	if(head==NULL){
		head=temp;return;
	}
	node*tail=head;
	while(tail->next!=NULL){
		tail=tail->next;
	}
	tail->next=temp;
}
void print(node*head){
	while(head){
		cout<<head->data<<" -> ";
		head=head->next;
	}
	cout<<"NULL"<<endl;
}
int kthnodeformend(node*head,int k){
	node*ptr=head;
	node*ptr2=head;int i=0;
	while(ptr){
		i++;
		if(i<=k){
			ptr=ptr->next;
		}
		else{
			ptr=ptr->next;
			ptr2=ptr2->next;
		}
	}
	return ptr2->data;
}
int main(){
	node*head=NULL;
	insertionatend(head,12);
	insertionatend(head,22);
	insertionatend(head,32);
	insertionatend(head,42);
	insertionatend(head,52);
	insertionatend(head,62);
	insertionatend(head,72);
	print(head);
	int n= kthnodeformend(head,1);
	cout<<"node form end is : "<<n<<endl;
	return 0;
}