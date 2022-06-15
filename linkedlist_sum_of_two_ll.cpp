// linkedlist_sum_of_two_ll.cpp
#include<iostream>
using namespace std;
class node
{
public:
	int data;
	node*next;
	node(int d) {
		data = d;
		next = NULL;
	}
};
node* create() {
	int n; cin >> n;
	node*head = NULL; node*tail = NULL;
	for (int i = 0; i < n; i++) {
		int d; cin >> d;
		node*temp = new node(d);
		if (head == NULL) {
			head = temp;
			tail = temp;
		}
		else {
			tail->next = temp;
			tail = tail->next;
		}
	}
	return head;
}
void print(node*head) {
	while (head) {
		cout << head->data << " ";
		head = head->next;
	}
	cout << endl;
}
istream& operator>>(istream& cin , node*&head) {
	head = create();
	return cin;
}
ostream& operator<<(ostream& cout, node*head) {
	print(head);
	return cout;
}
node* reverse(node*head){
	if(head==NULL){
		return NULL;
	}
	node*prev=NULL;
	while(head){
		node*temp=head->next;
		head->next=prev;

		prev=head;
		head=temp; 
	}
	head=prev;
	return head;
}
node* Sum_of_two_linkedlist(node*first, node* second) {
	//reverse first and second nodes so that sum operator is achieved easily
	first = reverse(first);
	second = reverse(second);

	// define carry,sum, two pointers pointing to addition of two linked list
	int carry = 0, sum = 0;
	node* tail_newll=NULL;
	node* head_newll=NULL;

	while (first != NULL and second != NULL) {
		sum = first->data + second->data + carry;
		carry = (sum >= 10) ? 1 : 0;
		sum=sum%10;
		node* newll=new node(sum);

		//manage two pointer of added linked list 
		if(head_newll==NULL){
			head_newll=newll;
			tail_newll=newll;
		}
		else{
			tail_newll->next=newll;
			tail_newll=newll;
		}
		//update two pointers of linked list
		first=first->next;
		second=second->next;
	}

	// if length of first linked list is greater than second
	while(first){
		sum=carry + first->data;
		carry = (sum>=10)?1:0;
		sum=sum%10;
		node* newll= new node(sum);
		tail_newll->next=newll;
		tail_newll=newll;

		first=first->next;
	}

	//if length of second linked list is greater than first 
	while(second){
		sum=carry + second->data;
		carry =(sum>=10)?1:0;
		sum=sum%10;
		node* newll = new node(sum);
		tail_newll->next=newll;
		tail_newll=newll;

		second=second->next;
	}

	// if carry is remain their at the end of added linked list
	if(carry){
		node*newll=new node(carry);
		tail_newll->next=newll;
		tail_newll=newll;
	}

	//return the actual: "reversed list" 
	return reverse(head_newll);
}
int main() {
	freopen("myinput.txt", "r", stdin);
	node*head1 = NULL, *head2 = NULL;
	cin >> head1 >> head2;
	cout << head1 << head2;
	node*head= Sum_of_two_linkedlist(head1,head2);
	cout<<head;
	return 0;
}