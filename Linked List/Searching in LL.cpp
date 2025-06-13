//For searching data from Linked list
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
void insertAtTail(node* &head,int val){
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
//Searching function
bool search(node* head, int key){
	node* temp=head;
	while(temp!=NULL){
		if(temp->data==key){
			return true;//if key is present o/p is 1(true)
		}
		temp=temp->next;
	}
	return false;//if key is present o/p is 0(false)
}
//Display function
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
	display(head);
	cout<<search(head,3)<<endl;
	return 0;
}









