#include<iostream>
using namespace std;
class node{
	public:
		int data;
		node* next;
		node* prev;
		node(int val){
			data=val;
			next=NULL;
			prev=NULL;
		}
};
void insertAtTail(node* &head, int val){
	node* n=new node(val);
	node* temp=head;
	while(temp->next!=NULL){
		temp=temp->next;
	}
	temp->next=n;
	n->prev=temp;
}

void intersect(node* &head1,node* &head2,int pos){
	node* temp1=head1;
	pos--;
	while(pos--){
		temp1=temp1->next;
	}
	node* temp2=head2;
	while(temp2->next!=NULL){
		temp2=temp2->next;
	}
	temp2->next=temp1;
}
void display(node* head){
	node* temp=head;
	while(temp!=NULL){
		cout<<temp->data<<"  ";
		temp=temp->next;
	}
	cout<<endl;
}

int main(){
	node* head1=NULL;
	node* head2=NULL;
	insertAtTail(head1,1);
	insertAtTail(head1,2);
	insertAtTail(head1,3);
	insertAtTail(head1,4);
	insertAtTail(head1,5);
	insertAtTail(head1,6);
	insertAtTail(head2,9);
	insertAtTail(head2,10);
	intersect(head1,head2,3);
	display(head1);
	display(head2);
	return 0;
	
}






































