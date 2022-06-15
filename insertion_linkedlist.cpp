// insertion_linkedlist.cpp
#include <iostream>
using namespace std;
class node{
public:
	int data ;
	node *next;
	node(int d){
		data = d;
		next=nullptr;
	}
 };
 node* insertAtEnd(node* head,int data){
 	node* n = new node(data);
 	if(head==nullptr)
 		return n;
 	while(head->next){
 		head=head->next;
 	}
 	head->next = n;
 	return head;
 }

void print(node*head){
	while(head){
		cout<<head->data<<" -> ";
		head = head->next;
	}
	cout<<" END "<<endl;
}


int main(){
	node *head = nullptr;

	head = insertAtEnd(head,35);
	head = insertAtEnd(head,15);

	print(head);

	return 0;

}