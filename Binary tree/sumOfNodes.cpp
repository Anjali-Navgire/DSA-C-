//sum od nodes in a binary tree

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

int sumNodes(Node* root){
    if(root==NULL){
        return 0;
    }
    return sumNodes(root->left)+sumNodes(root->right)+root->data;
}


int main(){
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right= new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    
    cout<<"The sum of all nodes in a given binary tree is :  "<<sumNodes(root)<<endl;

    return 0;
}
