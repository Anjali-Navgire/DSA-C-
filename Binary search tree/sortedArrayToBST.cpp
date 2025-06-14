//build balanced binary search tree form sorted array

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
Node* sortedArrayToBST(int arr[],int start, int end){
    if(start>end){
        return NULL;
    }
    int mid = (start+end)/2;

    Node* root=new Node(arr[mid]);
    root->left=sortedArrayToBST(arr,start,mid-1);
    root->right=sortedArrayToBST(arr,mid+1,end);

    return root;
}

void preorderPrint(Node* root){
    if(root==NULL){
        return ;
    }
    cout<<root->data<<" ";
    preorderPrint(root->left);
    preorderPrint(root->right);
}
int main(){
    int arr[]={ 10,20,30,40,50,60};
    cout<<" The preorder sequence of BST form given array is : ";
    Node* root=sortedArrayToBST(arr,0,5);
    preorderPrint(root);
    cout<<endl;

    return 0;

}