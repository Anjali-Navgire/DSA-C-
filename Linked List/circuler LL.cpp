//insertion at head and tail in circuler LL

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
void insertAtHead(node* & head,int val){
	node* n=new node(val);
	if(head==NULL){
		n->next=n;
		head=n;
		return;
	}
	node* temp=head;
	while(temp->next!=head){
		temp=temp->next;
	}
	temp->next=n;
	n->next=head;
	head=n;
}
void insertAtTail(node* &head,int val){
	if(head==NULL){
		insertAtHead(head,val);
		return;
	}
	node* n=new node(val);
	node* temp=head;
	while(temp->next!=head){
		temp=temp->next;
	}
	temp->next=n;
	n->next=head;
}
void display(node* head){
	node* temp=head;
	do{
		cout<<temp->data<<" ";
		temp=temp->next;
	}while(temp!=head);   //when (temp!=NULL) at that time circular LL will continue
	cout<<endl;
}
int main(){
	node* head=NULL;
	insertAtTail(head,1);
	insertAtTail(head,2);
	insertAtTail(head,3);
	insertAtTail(head,4);
	insertAtTail(head,5);
	display(head);
	insertAtHead(head,6);
	display(head);
	return 0;
}


























