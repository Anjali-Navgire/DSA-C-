//make cycle in Linked list
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
	node* n=new node(val);
	if(head==NULL){
		head=n;
		return;
	}
	node* temp=head;
	while(temp->next!=NULL){
		temp=temp->next;
		
	}
	temp->next=n;
}
void makeCycle(node* &head, int pos){
	node* temp=head;
	node* startNode;
	
	int count=1;
	while(temp->next!=NULL){
		if(count==pos){
			startNode=temp;
		}
		temp=temp->next;
		count++;
	}
	temp->next=startNode;
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
	makeCycle(head,3);
	display(head);
	return 0;
}

















