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

Node* LCA2(Node* root, int n2 , int n1){
    if(root==NULL){
        return NULL;
    }
    if(root->data == n1 || root->data == n2){
        return root;
    }
    Node* leftLCA =LCA2(root->left,n2,n1);
    Node* rightLCA =LCA2(root->right,n2,n1);

    if(leftLCA && rightLCA){
        return root;
    }
    if(leftLCA!=NULL){
        return leftLCA;
    }
    return rightLCA;
}

int main(){
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right= new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    
   int n1=5;
   int n2=6;
   Node* lca=LCA2(root,n2,n1);
   if(lca==NULL){
    cout<<"LCA does not exist"<<endl;
   }
   else{
    cout<<"LCA exist at : "<<lca->data<<endl;
   }
   cout<<endl;
    return 0;
}
