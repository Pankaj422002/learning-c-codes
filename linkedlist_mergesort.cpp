// linkedlist_mergesort.cpp
#include <iostream>
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
	node*head = NULL;
	node*tail = NULL;
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

node* mergearr(node*list1, node*list2) {
	if (list1 == NULL) {
		return list2;
	}
	if (list2 == NULL) {
		return list1;
	}

	node*head = NULL;
	if (list1->data < list2->data) {
		head = list1;
		head->next = mergearr(list1->next, list2);
	}
	else {
		head = list2;
		head->next = mergearr(list1, list2->next);
	}
	return head;
}
node* midcal(node*head) {
	node*slow = head;
	node*fast = head;
	while (fast->next != NULL and fast->next->next != NULL) {
		slow = slow->next;
		fast = fast->next->next;
	}
	return slow;
}

node* mergesort(node*head) {
	if (head == NULL or head->next == NULL) {
		return head;
	}

	node*mid = midcal(head);
	node*a = head;
	node*b = mid->next;
	mid->next = NULL;

	a = mergesort(a);
	b = mergesort(b);
	node*c = mergearr(a, b);
	return c;
}
void print(node*head) {
	while (head) {
		cout << head->data << " -> ";
		head = head->next;
	}
	cout << "NULL" << endl;
}
int main() {
	freopen("myinput.txt", "r", stdin);
	node*head = create();
	print(head);
	head = mergesort(head);
	print(head);
	return 0;
}