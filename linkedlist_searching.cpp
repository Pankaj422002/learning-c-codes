// linkedlist_searching.cpp
#include<iostream>
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
void insertatbeginning(node*&head,int item){
	node*temp=new node(item);
	if(head==NULL){
		head=temp;return ;
	}
	temp->next=head;
	head=temp;
}
void print(node*head){
	while(head){
		cout<<head->data<<" -> ";
		head=head->next;
	}
	cout<<"NULL"<<endl;
}
int search(node*head,int item){
	if(head==NULL){
		cout<<"node is empty!!"<<endl;
		return -1;
	}
	int i=0;
	while(head){
		i++;
		if(head->data==item){
		return i;
		}
		head=head->next;
	}
	return -1;	
}
int searchrecursive(node*head,int item,int i){
	if(head==NULL){
		return -1;
	}
	if(head->data == item){
		return i;
	}
	else{
		int ans= searchrecursive(head->next,item,++i);
		return ans;
	}
}
int main(){
	node*head=NULL;
	insertatbeginning(head,12);
	insertatbeginning(head,13);
	insertatbeginning(head,14);
	print(head);
	// int pos =search(head,13);
	int pos = searchrecursive(head,13,1);
	if(pos==-1){
		cout<<"element not found"<<endl;
	}
	else{
		cout<<"element found at position: "<<pos<<endl;
	}
	return 0;
}