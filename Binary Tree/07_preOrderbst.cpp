#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    struct node *left;
    struct node *right;
    //constructor
    node (int data){
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }
};

struct node *buildTree(node *root){
    cout<<"Enter the data: "<<endl;
    int data;
    cin>>data;
    root=new struct node(data);

    if(data==-1)
        return NULL;
    
    cout<<"Enter the data to be inserted on left of "<<data<<": "<<endl;
    root->left=buildTree(root->left);
    cout<<"Enter the data to be inserted on right of "<<data<<": "<<endl;
    root->right=buildTree(root->right);
    return root;
};

void preOrder(node *root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}
//1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1 
int main(){
    struct node *root=NULL;
    root=buildTree(root);
    cout<<"Inorder Traversal: ";
    preOrder(root);
    return 0;
}