//check if given BST is valid or not
//max of left subtree < node
//min of right subtree > node

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

bool isBST(Node* root,Node* min=NULL,Node* max=NULL){
    if(root==NULL){
        return true;
    }
    if(min!=NULL && root->data<=min->data){
        return false;
    }
    if(max!=NULL && root->data>=max->data){
        return false;
    }
    bool leftValid=isBST(root->left,min,root);
    bool rightValid=isBST(root->right,root,max);

    return leftValid and rightValid;
}

int main (){
    Node* root1= new Node(1);
    root1->left=new Node(2);
    root1->right=new Node(3);
    if(isBST(root1,NULL,NULL)){
        cout<<"root1 is Valid Binary search tree"<<endl;
    }
    else{
        cout<<"root1 is not Valid binary search tree"<<endl;
    }

    Node* root2=new Node(5);
    root2->left=new Node(3);
    root2->right=new Node(7);
    root2->left->left=new Node(1);
    root2->right->left=new Node(6);
    root2->right->right = new Node(9);

    if(isBST(root2,NULL,NULL)){
        cout<<"root2 is valid Binary search tree"<<endl;
    }
    else{
        cout<<"root2 is not Valid binary search tree"<<endl;
    }

    return 0;
}

//root1           1
//                /\
//               2  3


// root2          5
//               /\
//              3  7
//             /  /\
//            1  6  9
