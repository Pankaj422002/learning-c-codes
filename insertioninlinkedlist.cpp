// insertioninlinkedlist.cpp
#include <iostream>
using namespace std;
class node {
public:
	int data;
	node* next;
	node(int d) {
		data = d;
		next = NULL;
	}
};

void insertatbeginning(node* &head, int item) {
	node* temp = new node(item);
	if (head == NULL) {
		head = temp;
		return;
	}
	temp->next = head;
	head = temp;

}

void insertatend(node* &head, int item) {
	node* temp = new node(item);

	if (head == NULL) {
		head = temp;
		return;
	}

	node* tail = head;
	while (tail->next != NULL) {
		tail = tail->next;
	}

	tail->next = temp;

}

int length(node*head) {
	int count = 0;
	while (head) {
		head = head->next;
		count++;
	}
	return count;
}
// this is for inserting at the position that we have given to function
void insertatpos(node* &head, int item, int position) {
	node* temp = new node(item);
	if(head==NULL or position==1){
		insertatbeginning(head,item);return;
	}
		if (position > length(head)) {
		insertatend(head, item); return;
	}
	else {
		node*ptr=head;
		position--;
		while(--position){
			ptr=ptr->next;
		}
		temp->next=ptr->next;
		ptr->next=temp;
	}
}
/*
// this code is basically for: inserting after "position" no. of nodes.
void insertatpos(node* &head, int item, int position) {
	node* temp = new node(item);
	if (head == NULL or position == 0) {
		insertatbeginning(head, item); return ;
	}

	if (position > length(head)) {
		insertatend(head, item); return;
	}

	else {
		// jump position-1;

		node *ptr = head;
		int jump = 1;
		while (jump <= (position - 1)) {
			ptr = ptr->next;
			jump++;
		}
		temp->next = ptr->next;
		ptr->next = temp;
	}
}
*/
void insertatmiddle(node* &head, int item) {
	node* temp = new node(item);
	if (head == NULL) {
		head = temp; return;
	}
	node *slow, *fast;
	slow = fast = head;
	while (fast->next != NULL && fast->next->next != NULL) {
		slow = slow->next;
		fast = fast->next->next;
	}
	temp->next = slow->next;
	slow->next = temp;
}
void print(node* head) {
	while (head) {
		cout << head->data << " -> ";
		head = head->next;
	}
	cout << "NULL" << endl;

}

int main() {
	node*head = NULL;
	insertatbeginning(head, 12);
	insertatbeginning(head, 22);
	insertatbeginning(head, 19);
	insertatbeginning(head, 20);
	insertatbeginning(head, 244);
	print(head);

	insertatend(head, 23);
	insertatend(head, 22);
	insertatend(head, 21);
	insertatend(head, 222);

	print(head);

	insertatpos(head, 34, 2);
	insertatpos(head, 315, 1);
	print(head);

	insertatmiddle(head, 68);
	print(head);
	return 0;
}

/* #include <iostream>
using namespace std;
struct node{
	int data;
	node* next;
};
void insesrtatbeginning(node* &head,int item){
	node* temp = (node*)malloc(sizeof(node));
	temp->data =item;
	temp->next = head;
	head=temp;
}
void print(node*head){
	while(head){
		printf("%d -> ",head->data);
		head=head->next;
	}
	printf("NULL");
}
int main(){
	node* head=NULL;
	insesrtatbeginning(head,12);
	insesrtatbeginning(head,32);
	insesrtatbeginning(head,22);
	print(head);
	return 0;
}
*/