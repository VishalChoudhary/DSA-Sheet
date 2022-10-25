// Input from user
#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *newnode(int data)
{
    struct node *node=new struct node;
    node->data=data;
    node->left=NULL;
    node->right=NULL;
    return node;
};

struct node *buildtree(node* root){
    cout<<"Enter the data: "<<endl;
    int idata;
    cin>>idata;
    root=newnode(idata);

    if(idata==-1)
        return NULL;

    cout<<"Enter data for inserting in left of "<<idata<<":"<<endl;
    root->left=buildtree(root->left);
    cout<<"Enter data for inserting in right of "<<idata<<":"<<endl;
    root->right=buildtree(root->right);
    return root;
}

int main(){

    struct node *root=NULL;
    root=buildtree(root);
    cout<<root->left->data;
    return 0;
}