//Sum replacement in given binary tree
// Replace the value od each node with the sum of all subtree nodes & itself

#include"bits/stdc++.h"
using namespace std;

struct Node{
    int data;
    struct Node* left;
    struct Node* right ;
    Node(int val){
        data=val;
        left = NULL;
        right = NULL;
    }
};

void sumReplace(Node*root){
    if(root==NULL){
        return ;
    }
    sumReplace(root->left);
    sumReplace(root->right);
    if(root->left != NULL){
        root->data+=root->left->data;
    }
    if(root->right != NULL){
        root->data+=root->right->data;
    }

}

void preorder(Node* root){
    if(root==NULL){
        return ;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}


int main(){
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right= new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    
    cout<<"The binary is : ";
    preorder(root);
    cout<<"\n";
    cout<<"The binary tree after sum replacement is like : ";
    sumReplace(root);
    preorder(root);
    cout<<"\n";

    return 0;
}
