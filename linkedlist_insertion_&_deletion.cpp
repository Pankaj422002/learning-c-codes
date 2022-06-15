// linkedlist_insertion_&_deletion.cpp
/*
	insertion corner cases : 1) head ==NULL 
						  	 2) k==1

	deletion corner cases :  1) head ==NULL
							 2) k==1
							 3) ek hi node to nhi (means head->next== NULL + k==1)
						 	 4) given elements of node se jyada "k" daal dia 
*/
#include <iostream>
using namespace std;
class node{
public:
	int data;
	node*next;
	node(int d){
		data=d;
		next=NULL;
	}
};
void insertatfront(node*&head,int item){
	node*temp=new node(item);
	if(head==NULL){
		head=temp;
		return;
	}
	temp->next=head;
	head=temp;
}
void insertatend(node*&head,int item){
	node*temp=new node(item);
	if(head==NULL){
		head=temp;
		return;
	}
	node*ptr=head;
	while(ptr->next!=NULL){
		ptr=ptr->next;
	}
	ptr->next=temp;

}
void insertatk(node*&head,int item,int k){
	node*temp=new node(item);
	if(head==NULL or k==1){
		insertatfront(head,item);
	}
	else{
		node*ptr=head;
		int count=0;
		while(ptr->next){
			count++;
			if(count==(k-1)){
				break;
			}
			ptr=ptr->next;
		}

		temp->next=ptr->next;
		ptr->next=temp;
	}
}
void deleteatfront(node*&head){
	if(head==NULL){
		return;
	}
	else{
			node*ptr=head;
			head=head->next;
			delete ptr;
	}
}
void DeleteAtEnd(node*&head){
	if(head==NULL){
		return;
	}
	if(head->next==NULL){
		node*n=head;
		delete n;
		head=NULL;
		return;
	}
	else{
		node*ptr=head;
		while(ptr->next->next!=NULL){
			ptr=ptr->next;
		}
		node*n1=ptr->next;
		ptr->next=NULL;
		delete n1;
	}
}
void DeleteAtK(node*&head,int k){

	if(head==NULL or k==1){
		deleteatfront(head);
		return ;
	}
	
		int count=0;
		node*ptr=head;
		while(ptr->next!=NULL){
			count++;
			if(count==(k-1)){
				break;
			}
			ptr=ptr->next;
		}
		if(ptr->next==NULL){
			return;
		}

		node* n2=ptr->next;
		ptr->next=ptr->next->next;
		delete n2;	
}
void print(node*head){
	while(head){
		cout<<head->data<<" -> ";
		head=head->next;
	}
	cout<<"NULL"<<endl; 
}
int main(){
	node*head=NULL;
	insertatfront(head,23);
	print(head);
	insertatend(head,12);
	print(head);
	insertatk(head,34,3);
	print(head);

	// deleteatfront(head);
	// print(head);
	// DeleteAtEnd(head);
	// print(head);
	// DeleteAtEnd(head);
	// print(head);
	DeleteAtK(head,2);
	print(head);
	DeleteAtK(head,2);
	print(head);
	DeleteAtK(head,89);
	print(head);
	return 0;
}