//Detect cycle in linked list
#include<iostream>
using namespace std;
class node{
	public:
		int data;
		node* next;
		node(int val){
			data=val;
			next=NULL;
		}
};
void insertAtTail(node* &head, int val){
	node* n =new node(val);
	if(head==NULL){
		head=n;
		return;
	}
	node* temp=head;
	while(temp!=NULL){
		temp=temp->next;
		
	}
	temp->next=n;
}
bool detectCycle(node* &head){
	node* slow=head;
	node* fast=head;
	while(fast!=NULL && fast->next!=NULL){
		slow=slow->next;
		fast=fast->next->next;
		if(fast==slow){
			return true;  // O/P = 1
		}
	}
	return false;  // O/P= 0
}
void display(node* head){
	node* temp=head;
	while(temp!=NULL){
		cout<<temp->data<<"->";
		temp=temp->next;
	
	}
	cout<<"NULL"<<endl;
}

int main(){
	node* head=NULL;
	insertAtTail(head,1);
	insertAtTail(head,2);
	insertAtTail(head,3);
	insertAtTail(head,4);
	insertAtTail(head,5);
	insertAtTail(head,6);
	insertAtTail(head,7);
	display(head);
	cout<<detectCycle(head)<<endl;
	return 0;
}


















