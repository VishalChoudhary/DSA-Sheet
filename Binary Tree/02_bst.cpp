#include<bits/stdc++.h>
using namespace std;

//defining structure for tree
struct node{
    int data;
    struct node *left;
    struct node *right;
};

//creating newnode function to return node data
struct node *newnode(int data)
{
    struct node *node=new struct node;
    node->data=data;
    node->left=NULL;
    node->right=NULL;
    return node;
};

int main(){
    struct node *root=newnode(9); //passing data in newnode function
    root->left=newnode(2);
    root->right=newnode(7);
    root->left->right=newnode(9);
    cout<<root->left->right->data<<endl;
    return 0;
}
