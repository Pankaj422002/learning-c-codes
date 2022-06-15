#include <iostream>
using namespace std;
class node
{
public:
	int data;
	node*next;
	node(int d){
		data=d;
		next = NULL;
	}	
};
node*create(){
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
node*mergell(node*a,node*b){
	
	if(a==NULL){
		return b;
	}
	if(b==NULL){
		return a;
	}
	node*c;
	if(a->data < b->data){
		c=a;
		c->next=mergell(a->next,b);
	}
	else{
		c=b;
		c->next=mergell(a,b->next);
	}
	return c;
}
void print(node*head){
	while(head){
		cout<<head->data<<" -> ";
		head=head->next;
	}
	cout<<"NULL"<<endl;
}

istream& operator>>(istream&is, node*& head){
	head= create();
	return is;
}
ostream& operator<<(ostream&os, node*head){
	print(head);
	return os;
}

int main(){
	freopen("myinput.txt","r",stdin);
	node*a=NULL;
	node*b=NULL;
	cin>>a>>b;
	cout<<a<<b;
	node*head = mergell(a,b);
	cout<<head;
	return 0;
}