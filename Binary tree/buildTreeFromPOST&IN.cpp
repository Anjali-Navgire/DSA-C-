//create a binary tree from postorder and inorder 

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

int search(int inorder[], int start ,int end, int curr ){
    for(int i=start;i<=end;i++){
        if(inorder[i]==curr){
            return i;
        }
    }
    return -1;
}

Node* buildTree(int postorder[], int inorder[], int start , int end){
    static int idx=4;
    if (start>end){
        return NULL;
    }
    int curr=postorder[idx];
    idx--;
    Node* node = new Node(curr);
    if(start==end){
        return node;
    }
    int pos=search(inorder, start , end , curr);
    node->left= buildTree(postorder,inorder,start, pos-1);
    node->right= buildTree(postorder, inorder,pos+1,end);

    return node;
}

int inorderPrint(Node* root){
    if(root==NULL){
        return;
    }
    inorderPrint(root->left);
    cout<<root->data<<" ";
    inorderPrint(root->right);
}

int main(){
    int postorder[]={4,2,5,3,1};
    int inorder[]={4,2,1,5,3};

    Node* root= buildTree(postorder, inorder,0,4);
    inorderPrint(root);
    cout<<"\n";
    return 0;
}