//reverse k nodes
//k=2
//1->2->3->4->5->6->NULL (I/P)
//2->1->4->3->6->5->NULL (O/P)
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
		return ;
	}
	node* temp=head;
	while(temp->next!=NULL){
		temp=temp->next;
	}
	temp->next=n;
}
node* reverseK(node* &head,int k){
	
	node* prevptr=NULL;
	node* currptr=head;
	node* nextptr;
	
	if(nextptr!=NULL){
		head->next=reverseK(nextptr,k);
	}
	
	int count=0;
	while(currptr!=NULL && count<k){
		nextptr=currptr->next;
		currptr->next=prevptr;
		
		prevptr=currptr;
		currptr=nextptr;
		count++;
	}
	return prevptr;
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
	cout<<"The Linked list is : ";
	display(head);
	int k=3;
	node* newhead=reverseK(head,k);
	cout<<"After reversing 3 nodes output is : ";
	display(newhead);
	return 0;
	
}


















