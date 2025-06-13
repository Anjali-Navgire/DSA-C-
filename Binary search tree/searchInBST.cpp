// search any node in the binary search tree

#include<iostream>
using namespace std;

struct Node{
    int data;
    Node *left, *right;
    Node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};

Node* searchInBST(Node* root , int key){
    if(root==NULL){
        return NULL;
    }

    if(root->data==key){
        return root;
    }
    if(root->data>key){
        return searchInBST(root->left,key);
    }
    
    return searchInBST(root->right,key);
    
}
int main(){
    Node* root=new Node(5);
    root->left=new Node(3);
    root->right=new Node(8);
    root->left->right=new Node(4);
    root->right->right=new Node(9);

    if(searchInBST(root,5)==NULL){
        cout<<" key doesn't exist"<<endl;
    }
    else{
        cout<<"key exist"<<endl;
    }
    return 0;
}
