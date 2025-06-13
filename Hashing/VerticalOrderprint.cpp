#include<iostream>
#include<set>
#include<stack>
#include<queue>
#include<map>
#include<unordered_map>
#include<vector>
#include<algorithm>
#include<string>

using namespace std;

#define vi vector<int>
#define ff first
#define ss second
#define rep(i,a,n) for(int i=a;i=n; i++)

struct Node{
    int key;
    Node *left,*right;
};
Node* newNode(int key){
    Node* node=new Node;
    node->key=key;
    node->left=node->right=NULL;
    return node;
}
void getVerticalOrder(Node* root,int hdis,map<int,vi> &m){
    if(root==NULL){
        return;
    }
    m[hdis].push_back(root->key);
    getVerticalOrder(root->left,hdis-1,m);
    getVerticalOrder(root->right,hdis+1,m);
}
int main(){
    Node *root=newNode(10);
    Node *left=newNode(7);
    Node *right=newNode(4);
    root->left->left=newNode(3);
    root->left->right=newNode(11);
    root->right->left=newNode(14);
    root->right->right=newNode(16);

    map<int ,vector<int>>m;

    int hdis=0;
    getVerticalOrder(root,hdis,m);
    map<int ,vi>::iterator it;
    for(it=m.begin();it!=m.end();it++){
        for(int i=0;i<(it->ss).size();i++){
            cout<<(it->ss)[i]<<" "<<endl;
        }
    }
    return 0;
}














